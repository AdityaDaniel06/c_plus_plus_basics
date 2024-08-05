#include <iostream>
using namespace std;
void compare(int a, int b)
{

    if (a > b)
    {
        cout << "First no is greater: " << a << endl;
    }
    else if (b > a)
    {
        cout << "Second no is greater: " << b << endl;
    }
    else
    {
        cout << "Enter valid numbers";
    }
}

int main()
{
    int n1, n2;
    cout << "Enter two numbers to compare";
    cin >> n1 >> n2;
    compare(n1, n2);
}
