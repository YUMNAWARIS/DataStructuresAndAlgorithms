// Search in rotated array

#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int nums[n];
    // for (int i = 0; i < n; i++)
    //     cin >> nums[i];
    int n = 7;
    int nums[n] = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int index = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
        {
            index = mid;
            break;
        }
        // if left half is sorted
        if (nums[s] <= nums[mid])
        {
            // check if target lies in left side
            if (target <= nums[mid] && target >= nums[s])
                e = mid - 1;
            else
                s = mid + 1;
        }
        // if right side is sorted
        else
        {
            // check if target lies in right side
            if (target >= nums[mid] && target <= nums[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }

    cout << index << endl;
    return 0;
}