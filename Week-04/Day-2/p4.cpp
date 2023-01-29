// append = append 1 string to another

#include <iostream>
using namespace std;

int main()
{
    string fullname;
    getline(cin, fullname);
    string extension = "@gmail.com";
    string email = fullname.append(extension);
    cout << email << endl;
    return 0;
}