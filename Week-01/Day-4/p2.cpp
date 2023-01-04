//  finding factorial of a number

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 2; i--)
    {
        fact *= i;
        cout << fact << endl;
    }
    return fact;
}

int main()
{

    cout << factorial(5) << endl;
    return 0;
}