#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, 1, 2, 3, 3, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int count = 0;
    // int cur[n] = {};
    int i, j;

    for (i = 0; i < n; i++)
    {
        // int check = (arr[i] - arr[i + 1]);
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                // count++;
                break;
                // if (count = 0)
                //     cout << " unique " << arr[i] << endl;
            }
        }
        if (i == j)
        {
            cout << arr[i] << "\t";
        }
    }
    // count = 0;
    return 0;
}