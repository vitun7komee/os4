#include <iostream>
#include "calc.h"

using namespace std;

int main()
{
    int m, n, k;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    k = calc::calculate(m, n);

    cout << "Difference between the largest multiple of 7 and the smallest multiple of 5: " << k << endl;

    return 0;
}
