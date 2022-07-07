#include <iostream>
using namespace std;
int main()
{
    int base=6,exponent=5, result=1;
    cout << base << "^" << exponent << " = ";
    while (exponent != 0)
        {
        result *= base;
        --exponent;
        }
    cout << result;
    return 0;
}
