//  Check if number is odd or even

#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
    return 0;
}