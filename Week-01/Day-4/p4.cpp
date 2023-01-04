// Pascal triangle with nCr n=row r=col

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
int comb(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << comb(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}