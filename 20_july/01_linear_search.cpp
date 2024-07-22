#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 4, 6, 7, 8, 9, 23, 91, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    int index = linearSearch(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    }
    else
    {
        cout << key << " Not present " << endl;
    }

    return 0;
}