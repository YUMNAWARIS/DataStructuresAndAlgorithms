// Maximum subarray sum
#include <iostream>
using namespace std;

int main()
{
    int array[5] = {-1, 9, -2, 9, 8};
    int maximum = array[0];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
        maximum = max(maximum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maximum << endl;
    return 0;
}