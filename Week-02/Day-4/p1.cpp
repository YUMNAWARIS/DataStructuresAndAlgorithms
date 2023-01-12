// Printing all sub arrays of an Array

#include <iostream>
using namespace std;

int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Printing all subarrays
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}