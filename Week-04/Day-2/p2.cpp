// String empty function return true if empty

#include <iostream>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    if (name.empty())
    {
        cout << "Please Enter your name. You didnt enter your name.";
    }
    else
    {
        cout << "Hello " << name;
    }
    return 0;
}