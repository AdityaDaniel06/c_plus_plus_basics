#include <iostream>
using namespace std;

// remove duplicate values form the array
int main()
{

    int arr[] = {0, 1, 2, 3, 3, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}