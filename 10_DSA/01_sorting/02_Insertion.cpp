#include <iostream>
using namespace std;
// time complexity --O(n^2)    best case--o(n)
void insertionSort(int a[], int n)
{
    int sorted, temp;
    // for (int i = 1; i < n; i++)
    // {
    //     int current = a[i];
    //     int prev = a[i - 1];
    // }
    for (int i = 0; i < n; i++)
    {
        sorted = i;
        while (sorted > 0 && a[sorted - 1] > a[sorted])
        {
            temp = a[sorted];
            a[sorted] = a[sorted - 1];
            a[sorted - 1] = temp;
            sorted--;
        }
    }
}

int main()
{
    int arr[] = {-2, 4, -23, 1, 8, 0, 43, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}