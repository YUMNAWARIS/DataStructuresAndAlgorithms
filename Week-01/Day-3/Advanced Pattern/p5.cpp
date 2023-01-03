// Star Pattern Diamond Shape

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

        // Star
        for (int j = 1; j <= 2 * i - 1; j += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        // Space
        for (int s = (5 - i); s > 0; s--)
        {
            cout << "  ";
        }

        // Star
        for (int j = 2 * i - 1; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}