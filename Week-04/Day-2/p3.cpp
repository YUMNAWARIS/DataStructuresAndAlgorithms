// clear -> clears a string
#include <iostream>
using namespace std;

int main()
{
    string name;
    getline(cin, name);

    cout << "Welcome " << name << endl;
    name.clear();

    cout << "Name has been cleared. " << endl;
    cout << "Welcome " << name;
    return 0;
}