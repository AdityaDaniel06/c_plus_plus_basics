#include <iostream>

using namespace std;
int main() {
   int arr[] = { 2 , 4, 5 ,8, 0};
   int s = sizeof(arr)/sizeof(arr[0]);
   int temp;
   for( int i = 0 ; i<s; i++){
     for(int j= i+1; j<s ; j++){
        if(arr[i] > arr[j]){ // checing for ascending 
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
     }
   }
   for(int i =0; i< s; i++){
   cout << arr[i] ;
    } 
    return 0;
}