//  Half Pyramid after 180 degree rotation

#include <iostream>
using namespace std;

int main()
{

    int number = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
    return 0;
}