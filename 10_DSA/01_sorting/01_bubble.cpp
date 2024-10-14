#include <iostream>
using namespace std;

// Review Asymptotic Notation: omega(best case),  theta(avg case) , big O(worst case)
// time complexity = O(n^2)
// space complexity = O(1)
// Approch -- substract and conquer
// stable -- as duplicate values  doesnt change values
// inplace -- as no extra array was made
void bubbleSort(int arr[], int n)
{
    int flag;
    for (int i = 0; i < n; i++)
    {
        flag = 0; // initialize flag as false
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // swapping happens instantly with adjust node
                // swap(arr[j], arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1; // if any swap occurs, flag becomes true
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{

    int arr[] = {-2, 0, 4, 19, -1, 3, 1, 38};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);

    for (auto x : arr)
    {
        cout << x << " "; // print sorted array in ascending order.
    }
    return 0;
}