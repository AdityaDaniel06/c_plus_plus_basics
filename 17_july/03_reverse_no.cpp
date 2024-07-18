// Seccond lagrest no in an array

#include <iostream>
 
 using namespace std;
  int main(){
    int num;
    int reversed=0;
    cout << "Enter the number to be reserved: " << endl;
    cin >> num;
    int rem = 0;
   while(num > 0){
        rem = num % 10;
        num = num / 10;
        reversed = reversed*10 +rem;

    cout << rem ;
    }
    return 0;
  }

