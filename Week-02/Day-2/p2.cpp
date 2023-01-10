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

    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {

            if (i == j)
            {
                sum += arr[i];
                cout << "Sum of subarray " << i << " " << j << " is " << sum << endl;
            }
            else
            {
                sum += arr[j];
                cout << "Sum of " << i << " " << j << " is " << sum << endl;
            }
        }
    }
    return 0;
}