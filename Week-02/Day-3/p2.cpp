// Subarray with given sum
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
    int S;
    cin >> S;

    int j = 0;
    int en = 1;
    int st = 0;
    int sum = arr[0] + arr[1];
    while (j < size && en < size && st < size - 1)
    {
        if (sum == S)
        {
            break;
        }
        while (sum < S && en < size)
        {
            en++;
            sum += arr[en];
        }
        while (sum > S && st < size)
        {
            sum -= arr[st];
            st++;
        }
        j++;
    }
    st++;
    en++;
    if (sum == S)
    {
        cout << "starting: " << st << endl;
        cout << "ending: " << en << endl;
        cout << "sum: " << sum << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}