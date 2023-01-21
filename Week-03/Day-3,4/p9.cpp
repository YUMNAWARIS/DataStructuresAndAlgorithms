//  Search in sorted rotated array

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {4, 5, 6, 7, 1, 2, 3};
    int target = 7;

    // Main Algo
    int index = -1;

    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            index = mid;
            break;
        }

        if (arr[mid] >= arr[start])
        {
            if (target >= arr[start] && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start + mid + 1;
            }
        }
        else if (arr[mid] <= arr[end])
        {
            if (target >= arr[mid] && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = end - 1;
            }
        }
    }

    cout << index << endl;
    return 0;
}