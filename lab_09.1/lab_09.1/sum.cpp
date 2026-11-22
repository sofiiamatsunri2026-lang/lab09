
//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// обчислення суми ряду з точністю e
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 1;
    a = x;
    s = a;
    do {
        dod();
        s += a;
        n++;
    } while (fabs(a) > e);
}
