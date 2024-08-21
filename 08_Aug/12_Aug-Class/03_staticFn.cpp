// static data member and static member function  are the attribute of class.

// static data members are shareable ,memory is allocated once that also runtime

#include <iostream>
using namespace std;

class cybrom
{
    // int x;
    static int x; // static data member only declared here(inside the class)

public:
    static void input(int k1) // static function defined and declared inside the class
    {
        x = k1;
        // static function cannot have non-static data members
    }

    static void show()
    {
        cout << "Value of x is " << x << endl;
    }
};

int cybrom::x = 0; // static data member initialization(outside the class) ----- memory copy for all.
int main()
{
    // we can use static member  function of a classs, by using class name through scope resolution operator
    cybrom::input(300);
    cybrom::show(); // static member function can be called without object.

    // cybrom c1;
    // c1.input(10);
    // c1.show();
}