// taking input and printing output in 2D Array

#include <iostream>
using namespace std;

int main()
{
    // Taking size input
    int m;
    cin >> m;
    int n;
    cin >> n;
    // declaring
    int arr[m][n];
    // Taking input elements of 2D Array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Traversing and printing
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}