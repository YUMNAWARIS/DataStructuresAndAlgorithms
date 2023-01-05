// Octal to decimal

#include <iostream>
using namespace std;

int todec(int octal)
{
    int i = 1;
    int dec = 0;
    while (octal > 0)
    {
        int digit = octal % 10;
        octal += i * digit;
        i *= 8;
        octal /= 10;
    }
    return dec;
}
int main()
{
    int octal = 110;

    cout << todec(octal);

    return 0;
}