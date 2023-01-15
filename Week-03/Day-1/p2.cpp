// Searching an Elment in a matrix

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

    // Searching an element
    int to_search;
    cin >> to_search;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == to_search)
            {
                cout << "Element Found";
                return 0;
            }
        }
    }
    cout << "Element not found";
    return 0;
}