// Product of array accept self

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[5] = {-1, 1, 0, -3, 3};
    // Left Product
    int left[size];
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            left[i] = 1;
        else
            left[i] = left[i - 1] * arr[i - 1];
    }
    // right
    int right[size];
    for (int i = size - 1; i >= 0; i--)
    {
        if (i == size - 1)
            right[i] = 1;
        else
            right[i] = right[i + 1] * arr[i + 1];
    }
    for (int i = 0; i < size; i++)
    {
        cout << left[i] * right[i] << endl;
    }
    return 0;
}