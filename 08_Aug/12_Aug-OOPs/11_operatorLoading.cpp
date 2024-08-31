#include <iostream>
using namespace std;

// operator overloading is used to perform the operation on non primitive datatype and with the help of it we can change the behavior
// of any operator.There are two type of operator overloading.
// Unary operator overloading
// Binary operator overloading

class Complex
{
    int a;

public:
    Complex(int b)
    {
        a = b;
    }
    void operator++()
    {
        a++;
        cout << a;
    }
};
int main()
{
    Complex c(5);
    ++c; // using unary operator overloaded ==== c.operator++();
    return 0;
}