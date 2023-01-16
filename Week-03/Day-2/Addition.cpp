// Addition of two matrices

#include <iostream>
using namespace std;

int main()
{
    int m = 4, n = 5;
    int arr[m][n];
    int sec[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i * j;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sec[i][j] = i + j;
        }
    }

    // Addition
    int result[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = arr[i][j] + sec[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sec[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}