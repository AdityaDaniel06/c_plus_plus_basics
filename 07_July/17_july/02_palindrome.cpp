#include <iostream>
 using namespace std;

 int main(){
   
    int no;
    int rem;
    int rev =0;
    cout << "Enter a number to check: ";
    cin >> no;
    int m = no;
    while(no > 0){
        rem = no % 10;
        no = no /10;
        rev = rev * 10  + rem;
        if( m == rev){
            cout << "The number is a palindrome.";
            return 0;
        }
           
        
    }
     cout << rev << " Is not a palindrome.";
     return 0;
 }