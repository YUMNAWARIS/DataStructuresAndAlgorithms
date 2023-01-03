// Palindromic Pattern

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        // Space
        for (int s = 0; s < (5 - i); s++)
        {
            cout << "  ";
        }

        // Numbers
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }

        cout << endl;
    }
    return 0;
}