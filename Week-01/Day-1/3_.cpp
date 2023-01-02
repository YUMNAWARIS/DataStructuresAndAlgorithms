// Print all prime numbers till N

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    int div = 2;
    while (div < num)
    {
        if (num % div == 0)
        {
            return false;
        }
        else
        {
            div++;
        }
    }
    return true;
}

int main()
{
    int N;
    cout << "Enter any number: ";
    cin >> N;
    int temp = 1;
    while (temp < N)
    {
        if (isPrime(temp))
        {
            cout << temp << endl;
        }
        temp++;
    }

    return 0;
}