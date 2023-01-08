// Hackerrank
// English representation of a given range of numbers
// Hackerrank =>
// print the English representation of given number in lowercase.

#include <iostream>
using namespace std;
string to_Eng(int n)
{
    string answer = "";
    switch (n)
    {
    case 0:
        answer = "zero";
        break;
    case 1:
        answer = "one";
        break;
    case 2:
        answer = "two";
        break;
    case 3:
        answer = "three";
        break;
    case 4:
        answer = "four";
        break;
    case 5:
        answer = "five";
        break;
    case 6:
        answer = "six";
        break;
    case 7:
        answer = "seven";
        break;
    case 8:
        answer = "eight";
        break;
    case 9:
        answer = "nine";
        break;

    default:
        answer = "Number out of range.";
        break;
    }
    return answer;
}
int main()
{
    for (int i = 6; i <= 9; i++)
    {
        cout << to_Eng(i) << endl;
    }
    return 0;
}