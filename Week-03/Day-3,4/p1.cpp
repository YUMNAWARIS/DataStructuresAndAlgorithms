// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//     You may assume that each input would have exactly one solution,
//     and you may not use the same element twice.
#include <iostream>
using namespace std;

int main()
{
    // Taking input an array and target element
    int size, target;
    cin >> size >> target;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Algorithm
    int output[2];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                output[0] = i;
                output[1] = j;
                break;
            }
        }
    }

    cout << output[0] << "   " << output[1];

    return 0;
}