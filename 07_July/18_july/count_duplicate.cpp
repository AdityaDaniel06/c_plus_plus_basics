#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 3, 6, 7, 7, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 1;
    int temp = 0;

    // v1
    for (int i = 0; i < n; i++)
    {
        // only if  array is sorted
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        if (count > 1)
        {

            cout << "Element: " << arr[i] << " Occurrence: " << count << endl;
        }

        count = 1;
    }

    // v2------ count duplicate elements in th array
    count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                cout << arr[i] << " ";
            }
        }
    }
    cout << "Duplicate elements in the array  " << count;
    // count = 1;
    // temp = 0;
    return 0;
}