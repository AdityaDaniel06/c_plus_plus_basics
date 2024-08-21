#include <iostream>
using namespace std;
// NOTE array of decay problem when sizeof fn is used inside array

int SmallLargeSum(int arr[], int s)
{
    int sum = 0;
    int maxEven2 = 0, maxEven1 = INT_MIN;
    int max2 = 0, max1 = INT_MIN;
    if (s <= 3)
    {
        return 0;
    }

    for (int i = 0; i < s; i += 2)
    {
        if (arr[i] > maxEven1)
        {
            maxEven2 = maxEven1;
            maxEven1 = arr[i];
        }
        if (arr[i] > maxEven2 && arr[i] < maxEven1)
        {
            maxEven2 = arr[i];
        }
    }
    for (int j = 1; j < s; j += 2)
    {

        if (arr[j] > max1)
        {
            max2 = max1;
            max1 = arr[j];
        }
        if (arr[j] > max2 && arr[j] < max1)
        {
            max2 = arr[j];
        }
    }
    sum = maxEven2 + max2;
    return sum;
    // cout << "sum: " << sum << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int arr[] = {1, 2, 5, 7, 8, 3, 4, 9};
    // int s = sizeof(arr) / sizeof(arr[0]);
    int result = SmallLargeSum(arr, n);
    cout << result << endl;
}