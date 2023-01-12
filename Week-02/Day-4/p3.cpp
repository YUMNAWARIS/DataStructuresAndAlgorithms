// Maximum sum of Circular Array
// Maximum subarray sum

#include <iostream>
using namespace std;

int kadanes(int arr[], int size)
{
    int currentSum = 0;
    int maximumSum = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maximumSum = max(maximumSum, currentSum);
    }
    return maximumSum;
}

int main()
{
    // Taking array an input
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int nonwrap = kadanes(arr, size);
    int sum = 0;
    // Getting sum of actual array and reversing sign of every element
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        arr[i] = -arr[i];
    }
    int wrap = sum + kadanes(arr, size);
    cout << max(wrap, nonwrap) << endl;

    return 0;
}