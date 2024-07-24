#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cout << "Enter first array" << endl;
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

    int n2, m2;
    cout << "Enter second  array" << endl;
    cout << "enter no of rows ";
    cin >> n2;
    cout << "enter no of columns";
    cin >> m2;
    int arr2[n2][m2];
    int r2, c2;
    cout << "enter values";
    for (r2 = 0; r2 < n2; r2++)
    {
        for (c2 = 0; c2 < m2; c2++)
        {
            cin >> arr2[r2][c2];
        }
    }

    cout << " Sum of two arrays" << endl;
    for (r = 0, r2 = 0; r < n && r2 < n2; r++, r2++)
    {
        for (c = 0, c2 = 0; c < m, c2 < m2; c++, c2++)
        {

            cout << arr[c][r] + arr2[c][r] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
