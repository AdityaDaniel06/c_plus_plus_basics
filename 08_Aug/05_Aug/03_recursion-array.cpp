#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] < arr[1] && isSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

bool isSortedTwo(int arr[], int i, int n)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i] < arr[i + 1] && isSortedTwo(arr, i + 1, n))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 7};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << isSorted(arr, s);
    cout << isSortedTwo(arr, 0, s);
}