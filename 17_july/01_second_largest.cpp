#include <iostream>

using namespace std;
int main() {
int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int s= sizeof(arr)/ sizeof(arr[0]);
// int max1 =0; 
// int max2 =0;
int max1 = INT_MIN; 
int max2 =INT_MIN;

//  for(int i=0; i< s; i++) {
//     if(arr[i] > max1){
//         max2 = max1;
//         max1 = arr[i];
//     }
//     if(arr[i] > max2 && arr[i] < max1){
//         max2 = arr[i];
//     }
//  }
for( auto x : arr){
    if(x > max1){
        max2 = max1;
        max1 = x;
    }
    if(x > max2 && x < max1){
        max2 = x;
    }
}
cout<< max2<<endl;
    return 0;
}