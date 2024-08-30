#include <iostream>
using namespace std;
// we can create a parameterized  construtor by using either one parameter or more than one parameter.

class atm
{
    int code, pwd;

public:
    // constructor overloading
    // if a program contains more than one constructor.
    atm() // default constructor
    {
    }
    atm(int c, int p) // parameterized constructor
    {
        code = c;
        pwd = p;
    }

    void show()
    {
        cout << "ATM Code: " << code << endl;
        cout << "Password: " << pwd << endl;
    }
};
int main()
{
    // input arguments can be taken user and passed.
    atm a(1011, 2002);
    a.show();
}