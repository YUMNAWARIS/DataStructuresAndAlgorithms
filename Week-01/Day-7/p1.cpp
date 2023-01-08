// Hacker rank problem
// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                return a;
            }
            else
            {
                return d;
            }
        }
        else
        {
            if (c > d)
            {
                return c;
            }
            else
            {
                return d;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                return b;
            }
            else
            {
                return d;
            }
        }
        else
        {
            if (c > d)
            {
                return c;
            }
            else
            {
                return d;
            }
        }
    }
}
int main()
{
    cout << max_of_four(4, 1, 2, 3) << endl;

    return 0;
}