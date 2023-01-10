// Longest Arithmetic subarray length (Google Question)
// Given an array of size n. Output sum of each subarray

#include <iostream>
using namespace std;

int main()
{
    // Taking array input
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int pd = arr[1] - arr[0];
    int current = 2;
    int answer = 2;
    for (int i = 1; i < size; i++)
    {
        int diff = arr[i + 1] - arr[i];
        if (diff == pd)
        {
            current++;
            answer = max(current, answer);
        }
        else
        {
            pd = diff;
            current = 2;
        }
    }

    cout << answer;
    return 0;
}