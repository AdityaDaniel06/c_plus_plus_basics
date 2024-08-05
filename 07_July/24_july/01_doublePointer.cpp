#include <iostream>

using namespace std;
int main()
{

    int r, c;
    cin >> r;
    cin >> c;
    int **arr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c]; // create column for respective row
    }

        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Values of the array are" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    // Delete dynamically allocated memory
    delete[] arr;
    return 0;
}