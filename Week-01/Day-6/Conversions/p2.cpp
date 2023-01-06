// decimal to octal

#include <iostream>
using namespace std;

int toOct(int number)
{
    int base = 1;
    int octal = 0;
    while (base <= number)
    {
        base *= 8;
    }
    base /= 8;

    while (base >= 1)
    {
        int lastDigit = number / base;
        number -= lastDigit * base;
        octal = octal * 10 + lastDigit;
        base /= 8;
    }
    return octal;
}

int main()
{
    int number;
    cin >> number;
    cout << toOct(number) << endl;
    return 0;
}