#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cout << "enter no of rows ";
    cin >> n;
    cout << "enter no of columns";
    cin >> m;
    int arr[n][m];
    int r, c;
    cout << "enter values";
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            cin >> arr[r][c];
        }
    }
    cout << "Output is: " << endl;
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            if (arr[r][c] == 0)
            {
                arr[r][c] = -1;
            }

            cout << arr[r][c] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

// in a 2D array we use two subscript [][] . the first subscript below to row, and the second subscript belongs to column.
// we alway use two nested loop for 2D aaray
// where the first loop  is used for row  and the second is used for column