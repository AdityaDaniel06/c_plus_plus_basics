#include <iostream>
using namespace std;
void conquer(int arr[], int low, int mid, int high)
{
    int bk[6], k = low;
    int i = low;
    int j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            bk[k] = arr[i];
            i++;
        }
        else
        {
            bk[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        bk[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        bk[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = bk[i];
    }
}
void divide(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        divide(arr, low, mid);
        divide(arr, mid + 1, high);
        conquer(arr, low, mid, high);
    }
}
void print(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[] = {5, 1, 2, 6, 7, 8};
    int s = sizeof(arr) / sizeof(arr[0]);
    print(arr, s);
    divide(arr, 0, s - 1);
    cout << "\nafter merge sort\n";
    print(arr, s);
}