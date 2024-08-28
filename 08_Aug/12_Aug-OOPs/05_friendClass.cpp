#include <iostream>
using namespace std;
// with the help of friend class we can access the private data member and private member function of any class, outside of it
// provided that friend class should be declared inside of it.
class sbi
{
    int amount = 10000;
    void info()
    {
        cout << " Customer of SBI";
    }

    friend class axis; // friend class declared
};

class axis
{
public:
    void show(sbi s)
    {
        cout << "Amount : " << s.amount << endl;
        s.info(); // calling private member function of sbi class from axis class
        // it is possible because axis class is a friend of sbi class
    }
};

int main()
{
    sbi s_obj;
    axis ax_obj;
    ax_obj.show(s_obj);
}