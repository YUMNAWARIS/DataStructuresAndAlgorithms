// at -> return a character at a given index
#include <iostream>
using namespace std;

int main()
{
    // getting the initials
    string fname;
    getline(cin, fname);
    string lname;
    getline(cin, lname);

    char l1 = fname.at(0);
    char l2 = lname.at(0);

    cout << "Your initials are: " << l1 << l2 << endl;

    return 0;
}