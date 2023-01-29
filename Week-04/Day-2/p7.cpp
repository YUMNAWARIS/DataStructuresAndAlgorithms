// String function insert -> doesnt return anything, insert a string anywhere in another string
// insert(int position, string )

#include <iostream>
using namespace std;

int main()
{
    string name = "Yumna Waris";
    name.insert(5, " middle name ");
    name.insert(0, "@");
    string user = name.substr(0, 6);
    cout << user << endl;
    return 0;
}