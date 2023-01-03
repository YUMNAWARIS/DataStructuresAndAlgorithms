//  Number Pattern Triangle

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
        for (int j = 1; j <= i; j++)
        {
            cout << j << "   ";
        }
        cout << endl;
    }
    return 0;
}