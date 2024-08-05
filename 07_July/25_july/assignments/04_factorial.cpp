#include <iostream>
using namespace std;

void factorial(int a)
{
    long f = 1;
    if (a >= 0)
    {

        for (int i = a; i >= 1; i--)
        {
            f = f * i;
        }
        cout << "The factorial of " << a << "is : " << f << endl;
    }
}

int main()
{
    int no;
    cout << "Enter factorial number";
    cin >> no;
    factorial(no);
}