//
#include <iostream>
using namespace std;

int main()
{
    int rows, columns, tosearch;
    cin >> rows >> columns >> tosearch;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag = false;
    int r = 0, c = columns - 1;
    while (r < rows && c >= 0)
    {
        cout << arr[r][c] << endl;
        if (arr[r][c] == tosearch)
        {
            flag = true;
            break;
        }
        else if (arr[r][c] > tosearch)
            c--;
        else
            r++;
    }
    if (flag == true)
        cout << "Found...";
    else
        cout << "Not Found...";
    return 0;
}