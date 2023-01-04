// nCr
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = n; i >= 2; i--)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int ncr = factorial(5) / (factorial(5 - 2) * factorial(2));
    cout << ncr << endl;
    return 0;
}