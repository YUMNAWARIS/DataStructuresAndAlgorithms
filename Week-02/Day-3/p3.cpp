// First Repeating element

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
    bool idx[idx_size];
    for (int i = 0; i < idx_size; i++)
    {
        idx[i] = false;
    }

    // Traverse original array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            continue;
        }
        idx[arr[i]] = true;
    }

    int answer = -1;
    // Traverse idx
    for (int i = 0; i < idx_size; i++)
    {
        if (idx[i] == false)
        {
            answer = i;
            break;
        }
    }

    // Print answer
    cout << answer << endl;
    return 0;
}