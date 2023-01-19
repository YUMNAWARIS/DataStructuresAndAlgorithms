// Contains Duplicate

#include <iostream>
using namespace std;

int main()
{
    // Taking input an array and size of array
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // initializing another array
    const int idx_size = 1e4;
    int idx[idx_size];
    for (int i = 0; i < idx_size; i++)
    {
        idx[i] = -1;
    }

    // Traversing original array and updating idx accordingly
    int min_ind = INT16_MAX;
    for (int i = 0; i < size; i++)
    {

        if (idx[arr[i]] == -1)
        {
            idx[arr[i]] = i;
        }
        else
        {
            cout << true << endl;
            return 0;
        }
    }

    // Printing Answer
    cout << false << endl;

    return 0;
}