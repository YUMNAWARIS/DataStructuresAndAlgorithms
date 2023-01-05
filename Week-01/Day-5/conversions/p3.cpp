// Hexadecimal to decimal

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int todec(string hex)
{
    int base = 1;
    int dec = 0;
    int size = hex.size();

    for (int i = size - 1; i >= 0; i--)
    {
        char digit = hex[i];
        if (digit >= '0' && digit <= '9')
        {
            dec += base * (digit - '0');
        }
        else if (digit >= 'A' && digit <= 'F')
        {
            dec += base * (digit - 'A' + 10);
        }
        base *= 16;
    }
    return dec;
}
int main()
{
    string binary = "1CF";

    cout << todec(binary) << endl;
    return 0;
}