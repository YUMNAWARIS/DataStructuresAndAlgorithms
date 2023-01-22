// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Main Algo
    int left = 0;
    int right = n - 1;
    int maxi = INT8_MIN;
    while (left < right)
    {
        int width = right - left;
        int height = min(arr[left], arr[right]);
        int area = width * height;
        maxi = max(maxi, area);

        if (arr[left] < arr[right])
        {
            left++;
        }
        else if (arr[left] > arr[right])
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }
    cout << maxi;
    return 0;
}