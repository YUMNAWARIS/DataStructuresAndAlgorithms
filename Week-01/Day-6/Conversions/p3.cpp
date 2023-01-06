// decimal to hexadecimal

#include <iostream>
using namespace std;

string tohex(int dec)
{
    // base
    int base = 1;
    while (base <= dec)
    {
        base *= 16;
    }
    base /= 16;

    // storing answer
    string answer = "";

    while (base >= 1)
    {
        int lastDigit = dec / base;
        dec -= lastDigit * base;

        if (lastDigit <= 9)
        {
            answer = answer + to_string(lastDigit);
        }
        else
        {
            char a = 'A' + lastDigit - 10;
            answer.push_back(a);
        }

        base /= 16;
    }
    return answer;
}

int main()
{

    cout << tohex(100) << endl;
    return 0;
}