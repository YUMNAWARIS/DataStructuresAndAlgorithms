// Selection Sort

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {
        int minno = i + 1;
        bool flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                minno = j;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            int temp = arr[i];
            arr[i] = arr[minno];
            arr[minno] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
