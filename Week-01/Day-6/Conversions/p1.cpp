// Decimal to binary

#include <iostream>
using namespace std;

int toBin(int number)
{
    int base = 1;
    int binary = 0;

    while (base <= number)
    {
        base *= 2;
    }
    base /= 2;
    int sum = 0;
    while (base >= 1)
    {
        int ld = number / base;
        number -= ld * base;
        binary = binary * 10 + ld;
        base /= 2;
    }
    return binary;
}

int main()
{
    int number;
    cin >> number;
    cout << toBin(number) << endl;
    return 0;
}