// Spiral Order Traversal

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

    int row_start = 0, row_end = m - 1, column_start = 0, column_en = n - 1;
    while (row_start <= row_end && column_start <= column_en)
    {
        // row_start
        for (int i = column_start; i <= column_en; i++)
            cout << arr[row_start][i] << " ";
        row_start++;

        // column_end
        for (int i = row_start; i <= row_end; i++)
            cout << arr[i][column_en] << " ";
        column_en--;

        // row_end
        for (int i = column_en; i >= column_start; i--)
            cout << arr[row_end][i] << " ";
        row_end--;

        // column start
        for (int i = row_end; i >= row_start; i--)
            cout << arr[i][column_start] << " ";
        column_start++;
    }
    return 0;
}