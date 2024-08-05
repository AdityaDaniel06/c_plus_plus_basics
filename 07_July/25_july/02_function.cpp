#include <iostream>

using namespace std;

void depositAmount(int password, int amount = 0)
{
    int pamount = 1000;
    if (password == 1234 && amount > 0)
    {
        cout << "Your balance : " << (pamount + amount);
    }
    else if (password == 1234 && amount < 0)
    {
        cout << "Amount is invalid";
    }
    else
    {
        cout << "Invalid password. Transaction failed." << endl;
    }
}

int main()
{
    int password;
    int amount = 0;
    cout << "Enter your password" << endl;
    cin >> password;
    cout << "enter amount" << endl;
    cin >> amount;
    depositAmount(password, amount);

    return 0;
}