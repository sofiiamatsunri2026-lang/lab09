#pragma once

#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))   // більше з двох чисел
#define MIN(a, b) ((a) < (b) ? (a) : (b))   // менше з двох чисел
#define ABS(a)    ((a) < 0 ? -(a) : (a))    // модуль числа
#define SQR(a)    ((a) * (a))               // піднесення до квадрата
#define CUBE(a)   ((a) * (a) * (a))         // піднесення до куба
#define MIN2(a, b) SQR(MIN(a, b))           // квадрат мінімуму: min^2(a, b)

// виведення результату
#define PRINT_RESULT(w) cout << "w = " << (w) << endl;
