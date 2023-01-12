// Maximum subarray sum

#include <iostream>
using namespace std;

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

    // Kadanes Algorithm
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

    cout << maximumSum << endl;
    return 0;
}