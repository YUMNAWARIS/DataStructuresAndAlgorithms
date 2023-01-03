//  Rhombus Pattern

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
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}