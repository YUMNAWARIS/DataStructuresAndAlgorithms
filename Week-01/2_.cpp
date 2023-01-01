// Check for prime

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;

    int div = 2;
    while (div < number)
    {
        if (number % div == 0)
        {
            cout << "Not Prime";
            exit(0);
        }
        else
        {
            div++;
        }
    }
    cout << "Prime";
    return 0;
}