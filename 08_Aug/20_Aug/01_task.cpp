#include <iostream>
using namespace std;

void FindMaxInArray(int arr[], int s)
{
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < s - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    // cout << max << endl;
    cout << "Max value:" << max << endl;
    cout << "Index" << index << endl;
}

int main()
{
    int n = 1;
    cout << " enter the length of array";
    cin >> n;
    int arr[n];
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << " enter elements of array" << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    FindMaxInArray(arr, s);
    return 0;
}