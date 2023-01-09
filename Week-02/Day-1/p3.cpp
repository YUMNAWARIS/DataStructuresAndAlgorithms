// Binary Search

#include <iostream>
using namespace std;

int BinarySearch(int tosearch, int array[], int n)
{
    int s = 0;
    int l = n;

    while (s <= l)
    {
        int m = (s + l) / 2;

        if (array[m] == tosearch)
        {
            return m;
        }
        else if (array[m] > tosearch)
        {
            s = m + 1;
        }
        else if (array[m] < tosearch)
        {
            l = m - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int tosearch;
    cin >> tosearch;

    cout << BinarySearch(tosearch, arr, n);
    return 0;
}