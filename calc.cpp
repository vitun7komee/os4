#include "calc.h"

int calc::calculate(int m, int n)
{
    int max_7 = m / 7 * 7;
    if (max_7 < m) max_7 += 7;
    int min_5 = n / 5 * 5;
    if (min_5 > n) min_5 -= 5;
    return max_7 - min_5;
}
