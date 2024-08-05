#include <iostream>

using namespace std;
int main()
{
    // v1
    int arr[] = {1, 4, 5, 8, 31, 11, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    //  for(int i = n-1; i >= 0;i--){
    //      cout << arr[i] << " ";
    //  }

    // v2
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}