// Given an array of size n for every i from 0 to n-1 output max of i
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

    // MAX till i
    int mx = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }

    return 0;
}