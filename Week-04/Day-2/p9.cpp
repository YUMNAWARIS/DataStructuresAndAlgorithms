// erase the portion of a string
#include <iostream>
using namespace std;

int main()
{
    string phone = "021 3356910909";

    cout << phone.erase(0, 4).insert(0, "0") << endl;
    return 0;
}