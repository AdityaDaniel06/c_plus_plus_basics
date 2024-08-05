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
    int sum = 0;
    cout << "enter values";
    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {
            cin >> arr[r][c];
        }
    }

    for (r = 0; r < n; r++)
    {
        for (c = 0; c < m; c++)
        {

            sum = sum + arr[r][c];
        }
    }
    cout << "Output is: " << sum << endl;

    return 0;
}
