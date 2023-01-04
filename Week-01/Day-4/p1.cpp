// program to print fibonaci till n
#include <iostream>
using namespace std;

void printFibonci(int num)
{
    int n1 = 0;
    int n2 = 1;
    for (int i = 0; i < num; i++)
    {
        cout << n1 << endl;
        int temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    return;
}

int main()
{

    printFibonci(9);
    return 0;
}
