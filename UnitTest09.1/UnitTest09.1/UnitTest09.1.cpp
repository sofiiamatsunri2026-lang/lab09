
#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../var.h"
#include "../dod.h"
#include "../sum.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(UnitTest91)
  {
    public:

        TEST_METHOD(TestDod)
        {
            nsVar::x = 0.5;
            nsVar::n = 1;
            nsVar::a = 0.5;

            nsDod::dod();

            Assert::AreEqual(0.125 / 6, nsVar::a, 1e-9);
        }

        TEST_METHOD(TestSum)
        {
            nsVar::x = 0.5;
            nsVar::e = 1e-6;

            nsSum::sum();

            Assert::AreEqual(asin(0.5), nsVar::s, 1e-5);
        }

        TEST_METHOD(TestSumNegative)
        {
            nsVar::x = -0.5;
            nsVar::e = 1e-6;

            nsSum::sum();

            Assert::AreEqual(asin(-0.5), nsVar::s, 1e-5);
        }
    };
}
