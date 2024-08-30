#include <iostream>
using namespace std;

// constructor is used to allocate/create memory of an object of it's class at run time.
// constuctor is called when object of class is created... and it is called automatically
// NOTE : constructor does not any return type
//  constructor is always public
//  there are three types of constructor :
// 1) default constructor 2) paramterized constructor
// 3)copy constructor---> deep copy constructor and shallow copy constructor

// Default constructor: C++ , contains a default constructor and default constructor is always non-parameterized
// constructor and destructor are called implicitly.
class MyClass
{
public:
    MyClass()
    {
        cout << "Default constructor called" << endl;
    }

    ~MyClass() // called depending upon number of objects being created
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    MyClass obj1; // default constructor called
    return 0;
}