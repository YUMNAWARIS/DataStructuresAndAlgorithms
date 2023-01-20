// Maximum subarray product
#include <iostream>
using namespace std;

int main()
{
    int array[5] = {-1, 9, -2, 9, 8};
    int maximum = array[0];
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        product *= array[i];
        maximum = max(maximum, product);
        if (product < 0)
        {
            product = 1;
        }
    }
    cout << maximum << endl;
    return 0;
}