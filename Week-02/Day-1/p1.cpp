// Take an array input from user and print max and min elements of an array
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxno = INT8_MIN;
    int minno = INT8_MAX;

    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, arr[i]);
        minno = min(minno, arr[i]);
    }

    cout << maxno << " " << minno << endl;

    return 0;
}