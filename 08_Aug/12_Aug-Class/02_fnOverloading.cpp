// If a class has more than one function with same name but have differnt parameters, is called function overloading class.
#include <iostream>
using namespace std;

class cybrom
{
    int a, b, c;
    // 'this' points to these class members

public:
    void sum(int a, int b)
    { // this pointer
        this->a = a;
        this->b = b;
        cout << "Sum of two integers" << a + b << endl;
    }

    void sum(int x, int y, int z)
    {
        // optimization: no extra varibles.
        cout << "Sum of Three integers" << x + y + z << endl;
    }

    void sum()
    {
        cout << "Example of function Overloading" << endl;
    }
};

int main()
{
    cybrom c;
    c.sum();
    c.sum(5, 7);
    c.sum(5, 7, 10);

    return 0;
}