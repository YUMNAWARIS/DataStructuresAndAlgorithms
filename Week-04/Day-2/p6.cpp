// substring function -> returns a portion of string
#include <iostream>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    string nick = name.substr(0, 3);
    string str1 = name.substr(3, name.length());
    cout << nick << endl;
    cout << str1 << endl;
    return 0;
}