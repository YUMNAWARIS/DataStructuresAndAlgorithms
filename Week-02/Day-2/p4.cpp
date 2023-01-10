//  Record Breaking Day
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
    if (size == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int mx = -1;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] > mx) && (arr[i] > arr[i + 1]))
        {
            count++;
        }
        mx = max(mx, arr[i]);
    }
    cout << count << endl;
    return 0;
}