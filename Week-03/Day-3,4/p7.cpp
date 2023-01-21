// least value of rotated array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int least = nums[0];
    int lptr = 0;
    int rptr = n - 1;
    int mptr = n / 2;
    while (lptr < rptr)
    {
        if (n == 2 || mptr == lptr)
        {
            least = min(nums[lptr], nums[rptr]);
            break;
        }
        if (nums[lptr] < nums[rptr])
        {
            least = nums[lptr];
            break;
        }
        else
        {
            if (nums[mptr] < nums[lptr])
                rptr = mptr;
            else
                lptr = mptr;

            mptr = (lptr + rptr) / 2;
        }
    }
    cout << least << endl;
    return 0;
}