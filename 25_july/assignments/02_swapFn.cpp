#include <iostream>
using namespace std;

void swapp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Enter first number to swap x = " << a << endl;
    cout << "Enter first number to swap y = " << b << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter first number to swap x = ";
    cin >> n1;
    cout << "Enter second number to swap y = ";
    cin >> n2;
    cout << "Numbers after swapping ";
    swapp(n1, n2);
}