//  Linear Search

#include <iostream>
using namespace std;
int LinearSearch(int tosearch, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == tosearch)
        {
            return i;
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

    cout << LinearSearch(tosearch, arr, n);
    return 0;
}