// Pair-Sum Problem in sorted array
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
    bool flag = false;
    int k;
    cin >> k;
    int start = 0;
    int end = size - 1;
    int sum = arr[start] + arr[end];
    while (start <= end && sum != k)
    {
        sum = arr[start] + arr[end];
        if (sum == k)
        {
            flag = true;
            break;
        }
        else if (sum > k)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << flag << endl;
    return 0;
}