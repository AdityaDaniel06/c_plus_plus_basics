// wap to accept number of hours from user as well as online status in the form of boolean value.

#include <iostream>

using namespace std;
int main() {
    // float hours_online = 0;
    // bool online_status;
    
    //  cout << "Enter the number of hours user was online: ";
    //  cin >> hours_online;

    //  cout << "Enter the online status of the user: ";
    //  cin >> online_status;

    // cout << "Hours online: " << hours_online << " Status:" << online_status ;

    // Sum of n natural numbers
    int sum =0 ,no;
    cin >> no;
    for(int i =1 ; i<= no; i++ ){
        sum += i;
    }
    cout << "Sum of first " << no << " natural numbers is: " << sum;

    return 0;
}