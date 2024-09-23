#include <iostream>
using namespace std;

class sbi
{

public:
    void display()
    {
        cout << "sbi customer";
    }
};

class axis
{
public:
    void show()
    {
        cout << "Axis Customer" << endl;
    }
};

class customer : private sbi, private axis
{
public:
    void msg()
    {
        sbi::display(); // privately inherited class , called outside
        axis::show();
        cout << "Customer" << endl;
    }
};

int main()
{
    customer c;
    c.msg();
}