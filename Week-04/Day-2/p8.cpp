// string1.find(string2)
// search for string2 in string1 and returns the index of first occurance
#include <iostream>
using namespace std;

int main()
{
    string sent1 = "Yumna is a good girl.";
    string sent2 = "intelligent piece of advice.";
    string sent3 = "I dont like it that much.";

    cout << sent1.substr(sent1.find("good"), sent1.length()) << endl;
    cout << sent2.find("intell") << endl;
    cout << sent3.find("don") << endl;
    return 0;
}