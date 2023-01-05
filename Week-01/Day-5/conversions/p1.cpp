// Binary to decimal conversion

#include <iostream>
using namespace std;

int todecimal(int binary)
{
    int i = 1;
    int decimal = 0;
    while (binary > 0)
    {
        int digit = binary % 10;
        decimal += i * digit;
        i *= 2;
        binary /= 10;
    }
    return decimal;
}
int main()
{
    int binary = 1111;

    cout << todecimal(binary);

    return 0;
}