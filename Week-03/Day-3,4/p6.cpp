// Maximum subarray product
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nums[4] = {2, 3, -2, 4};
    int size = 4;
    int product = 1;
    int l = 1, r = 1, res = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        l = l * nums[i];
        r = r * nums[size - i - 1];
        res = max({res, l, r});
        if (l == 0)
            l = 1;
        if (r == 0)
            r = 1;
    }
    cout << res << endl;
    return 0;
}