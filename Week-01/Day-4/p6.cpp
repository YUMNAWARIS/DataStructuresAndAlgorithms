// Check for Pythagorean triplets

#include <iostream>
using namespace std;

int formula(int p, int b, int h)
{
    return (h * h == (p * p) + (b * b));
}

int pythagorean(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            formula(b, c, a);
        }
        else
        {
            formula(b, a, c);
        }
    }
    else
    {
        if (b > c)
        {
            formula(c, a, b);
        }
        else
        {
            formula(b, a, c);
        }
    }
}

int main()
{
    if (pythagorean(3, 4, 5))
    {
        cout << "3,4,5 are pythagorean triplets";
    }
    else
    {
        cout << "3,4,5 are not pythagorean triplets.";
    }

    return 0;
}