// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit,return 0.
#include <iostream>
using namespace std;

int main()
{
    // Taking input an array and target element
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Algorithm
    int max_profit = 0;
    int mini = array[0];

    for (int price : array)
    {
        mini = min(mini, price);
        int profit = price - mini;
        max_profit = max(max_profit, profit);
    }

    cout << max_profit << endl;

    return 0;
}