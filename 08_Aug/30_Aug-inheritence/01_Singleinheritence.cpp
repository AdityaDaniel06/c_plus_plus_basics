// It is used to access the properties of parent class by it's child class. and it's help we write less code.

// there are 5 types of inhertience
// 1) Single inheritance: we use only two classes, where the first class is parent class and inherited class is child clas
// we create an object of child class and with the helpof it we can access the data member and member function of both classes
// 2) multi-level inheritance
// 3) multiple inheritance
// 4) hierarchical inheritance
// 5) hybrid inheritance
#include <iostream>
using namespace std;

// base class || parent class
class Rbi
{
    int a = 90;

protected:
    void error()
    {
        cout << "Error in RBI" << endl;
    }

public:
    void show()
    {
        cout << "Hello from RBI";
        error();
    }
};

class sbi : public Rbi
{
    int b = 20;

public:
    void display()
    {
        cout << "Hello from SBI" << endl;
        cout << "b: " << b << endl; // access child class member
    }
};
int main()
{
    sbi obj;       // this object creates memory for both data member a ,b classes
    obj.show();    // access parent class member
    obj.display(); // access both parent and child class member
    return 0;
}