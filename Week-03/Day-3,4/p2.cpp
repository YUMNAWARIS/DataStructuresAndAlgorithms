// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit,return 0.
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
    return 0;
}