#include "pch.h"
#include "CppUnitTest.h"
#include "../macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// формула гілки z > 5, записана через макроси
double Branch1(double x, double y, double z)
{
    return MIN2(x * CUBE(y), x + z);
}

// формула гілки z <= 5, записана через макроси
double Branch2(double x, double y, double z)
{
    return MAX(x - y * z, x * y + z);
}

namespace UnitTestMacros
{
    TEST_CLASS(UnitTest1)
    {
    public:

        // перевірка базових макросів
        TEST_METHOD(TestBasicMacros)
        {
            Assert::AreEqual(5.0, (double)MAX(2, 5));
            Assert::AreEqual(2.0, (double)MIN(2, 5));
            Assert::AreEqual(4.0, (double)ABS(-4));
            Assert::AreEqual(9.0, (double)SQR(3));
            Assert::AreEqual(8.0, (double)CUBE(2));
            Assert::AreEqual(4.0, (double)MIN2(-2, 4));
        }

        // z > 5: x = 1, y = 2, z = 7 -> min(8, 8)^2 = 64
        TEST_METHOD(TestBranch1_Equal)
        {
            Assert::AreEqual(64.0, Branch1(1, 2, 7));
        }

        // z > 5: x = 2, y = 1, z = 6 -> min(2, 8)^2 = 4
        TEST_METHOD(TestBranch1_FirstSmaller)
        {
            Assert::AreEqual(4.0, Branch1(2, 1, 6));
        }

        // z > 5: x = 1, y = 3, z = 6 -> min(27, 7)^2 = 49
        TEST_METHOD(TestBranch1_SecondSmaller)
        {
            Assert::AreEqual(49.0, Branch1(1, 3, 6));
        }

        // z <= 5: x = 1, y = 2, z = 3 -> max(-5, 5) = 5
        TEST_METHOD(TestBranch2_A)
        {
            Assert::AreEqual(5.0, Branch2(1, 2, 3));
        }

        // z <= 5: x = 2, y = 1, z = 5 -> max(-3, 7) = 7
        TEST_METHOD(TestBranch2_B)
        {
            Assert::AreEqual(7.0, Branch2(2, 1, 5));
        }
    };
}