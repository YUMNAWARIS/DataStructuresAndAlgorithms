// string length function

#include <iostream>
using namespace std;

int main()
{
    string firstname;
    cout << "Enter your first name: ";
    getline(cin, firstname);
    int len = firstname.length();
    if (len >= 10)
        cout << "Your name should be less than 10 characters.";
    else if (len <= 2)
        cout << "Name should be greater than 2 charcters.";
    else
        cout << firstname;
    return 0;
}