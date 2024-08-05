#include <iostream>
using namespace std;

void swapp(int &a, int &b) // call by reference;
{
    int temp = a;
    a = b;
    b = temp;
    // cout << "Enter first number to swap x = " << a << endl;
    // cout << "Enter first number to swap y = " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter first number to swap x = ";
    cin >> a;
    cout << "Enter second number to swap y = ";
    cin >> b;
    swapp(a, b);
    cout << "Numbers after swapping " << a << b << endl;
}