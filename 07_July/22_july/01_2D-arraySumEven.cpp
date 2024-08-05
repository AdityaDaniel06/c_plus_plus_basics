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

    int arr2[n][m];
    int r, c;
    int sum = 0;
    cout << "enter values";
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            cin >> arr[r][c];
        }
    }
    cout << "enter values of second matrix";
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            cin >> arr2[r][c];
        }
    }

    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            if (arr[r][c] % 2 == 0)
            {
                sum = arr[r][c] + arr2[r][c];
                cout << sum << endl;
            }
            else
            {
                sum = arr[r][c] - arr2[r][c];
                cout << sum << "\t";
            }
        }
    }
    // cout << "Output is: " << endl;

    return 0;
}

// 3D array
int arr[2][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};