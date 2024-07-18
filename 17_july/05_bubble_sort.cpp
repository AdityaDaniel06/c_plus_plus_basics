#include<iostream>
using namespace std;

//sort the element in ascending order;
void bubbleSort( int arr[] , int n){
    for(int i = 1; i<n ; i++){
        for(int j =0; j < n-i-1; j++){
            if( arr[j] > arr[j+1]){
                // swap(arr[j], arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){

    int arr[] = {-2 , 0 , 4 , 19 , -1 , 3,1, 38};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr ,size);
    
    for(auto x : arr){
        cout << x << " ";  // print sorted array in ascending order.
    }
    return 0;
}