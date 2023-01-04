// Function to sum first n natural number

#include <iostream>
using namespace std;

int sumseries(int n)
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int main()
{
    cout << sumseries(10) << endl;
    return 0;
}