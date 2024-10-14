#include <iostream>
using namespace std;

// selection sort is slower than bubble sort, it takes more time to comapre the values
// time complexity is O(n^2)
// space complexity O(1)
// approach -- substract and conquer
// in place
// stable
// structure
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lowest;

    for (int i = 0; i < n - 1; i++)
    {
        lowest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[lowest])
            {
                lowest = j;
            }
        }
        // swap(arr[i], arr[lowest]);
        if (lowest != i)
        {
            int temp = arr[i];
            arr[i] = arr[lowest];
            arr[lowest] = temp;
        }
    }
}