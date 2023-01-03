// Prime Number With Efficient method

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sq = sqrt(n);
    bool flag = 0;
    for (int i = 2; i <= sq; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            cout << "Not a Prime" << endl;
        }
    }
    if (flag != 1)
    {
        cout << "Prime" << endl;
    }
    return 0;
}