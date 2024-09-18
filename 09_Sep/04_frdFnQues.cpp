#include <iostream>
using namespace std;

class A;
class B
{
public:
    int x = 1;
    friend void compareNumbers(int a, int b);
};

class A
{
public:
    int y = 2;
    friend void compareNumbers(int a, int b);
};

// void compareNumbers(A objA, B objB)
// {
//     if (objA.y > objB.x)
//         cout << objA.y << " is greater." << endl;
//     else if (objA.y < objB.x)
//         cout << objB.x << " is greater." << endl;
//     else
//         cout << "Both numbers are equal." << endl;
// }

void compareNumbers(int a, int b)
{
    if (a > b)
        cout << a << " is greater." << endl;
    else if (a < b)
        cout << b << " is greater." << endl;
    else
        cout << "Both numbers are equal." << endl;
}
int main()
{
    A a;
    B b;
    compareNumbers(a.y, b.x);
}