#include <iostream>
using namespace std;
// diamond problem is seen in multiple inheritance ,
// where one child class inhertices multiple parent classe and each parent class has a function with the same name/
// function should have same signature

// Solution:
class Parent1
{
public:
    void display()
    {
        cout << "parent 1";
    }
};
class Parent2
{
public:
    void display()
    {
        cout << "parent 2";
    }
};

class Child : public Parent1, public Parent2
{
};
int main()
{
    Child obj;
    // obj.display(); // output : parent 1------ diamond problem ----
    obj.Parent1::display(); // slicing
    obj.Parent2::display();

    Parent1 p1 = obj; // Typecasting== using extra memory
    p1.display();     // output : parent 1

    static_cast<Parent1>(obj).display(); // smart pointer
    return 0;
}