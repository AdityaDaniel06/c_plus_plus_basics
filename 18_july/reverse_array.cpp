#include <iostream>

using namespace std;
int main() {
    int arr[] = {1,4,5,8,31,11,34};
    int s  = sizeof(arr) / sizeof(arr[0]);
    for(int i = s-1; i >= 0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}