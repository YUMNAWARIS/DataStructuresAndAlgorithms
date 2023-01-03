// If a given number is Armstrong or not

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int temp = n;
    int armstrong = 0;
    while (n != 0)
    {
        int digit = n % 10;
        armstrong += digit * digit * digit;
        n = n / 10;
    }
    if (armstrong == temp)
    {
        cout << "Atmstrong" << endl;
    }
    else
    {
        cout << "Not an Armstrong" << endl;
    }
    return 0;
}