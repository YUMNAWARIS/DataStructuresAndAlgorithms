#include <iostream>
using namespace std;

int main()
{
    int rows = 3, columns = 4;
    int arr1[rows][columns];
    int arr2[columns][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr1[i][j] = 1;
        }
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            arr2[i][j] = 1;
        }
    }

    // Printing
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    int result[rows][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            int element = 0;
            for (int k = 0; k < columns; k++)
            {
                element += arr1[i][k] * arr2[k][j];
            }
            result[i][j] = element;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}