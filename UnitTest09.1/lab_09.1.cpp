//////////////////////////////////////////////////////////////////////////////
// Lab_9_1.cpp
// головний файл проекту – функція main
// Мацун Софія
#include <iostream>
#include <math.h>
#include <iomanip>
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx  = "; cin >> dx;
    cout << "e   = "; cin >> e;
    cout << endl;

    cout << "Таблиця значень arcsin x" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << setw(8) << "x"
        << setw(14) << "S(x)"
        << setw(14) << "asin(x)"
        << setw(8) << "n" << endl;
    cout << "-----------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum();
        cout << fixed << setprecision(5)
            << setw(8) << x
            << setw(14) << s
            << setw(14) << asin(x)
            << setw(8) << n << endl;
        x += dx;
    }

    cin.get();
    cin.get();
    return 0;
}

