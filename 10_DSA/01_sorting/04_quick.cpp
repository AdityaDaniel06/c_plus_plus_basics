#include <iostream>
using namespace std;

// O(log n) ---Divide n Conquer
int sorting(int arr[], int low, int high)
{
    int pivot = arr[low];
    int p = low + 1;
    int q = high;
    int temp;

    do
    {
        while (arr[p] < pivot)
        {
            p++;
        }
        while (arr[q] > pivot)
        {
            q--;
        }

        if (p < q)
        {
            temp = arr[p];
            arr[p] = arr[q];
            arr[q] = temp;
        }
    } while (p < q);

    temp = arr[low];
    arr[low] = arr[q];
    arr[q] = temp;

    return q;
}
int quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = sorting(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
}