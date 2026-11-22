#include <iostream>
#include "macros.h"

#define Z 7

using namespace std;

int main()
{
    double x, y;    // змінні, які вводить користувач
    double w;       // результат

    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;

#if Z > 5
    // гілка 1: z > 5
    cout << "Branch: z > 5" << endl;
    w = MIN2(x * CUBE(y), x + Z);
#else
    // гілка 2: z <= 5
    cout << "Branch: z <= 5" << endl;
    w = MAX(x - y * Z, x * y + Z);
#endif

    PRINT_RESULT(w);

    cin.get();
    cin.get();
    return 0;
}