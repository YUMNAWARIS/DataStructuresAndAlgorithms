// zigzag star Pattern n=3
#include <iostream>
using namespace std;

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * n; j++)
        {
            if ((i + j) % (n + 1) == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}