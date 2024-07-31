#include <iostream>
using namespace std;

void printArray(int a[], int s)
{ // passing array as parameter into a function
    int arr[] = {};
    for (int i = 0; i < s; i++)
    {

        a[i] = a[i] + 10;
    }
    // return a[] + 10;;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    cout << "Array after modification: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}