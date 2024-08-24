// Review
// Pillars of OOPS: Encapsulation , Abstraction , Inheritance ,Polymorphism
// Class is collection of data members and member function.
// Class is also called user defined data type.

// Class takes no memory but object does(empty class): memory takes one byte.
// Object : real world entity that occupies some memory
// Object is an instance of a class. Class is an blueprint of an object.

// access Modifier / Specifier == private(by default) , public , protected

// . ===

// types of classes
// 1) single class: if a program having one class.
// 2) ananymous class: if a program having a class which doesn't have it's own name
// class{
//     int a;
//     void show()
//     {
//         cout << "Ananymous Class";
//     }
// } obj;
// obj.show();
//}
// 3) multi class: if a program having more than one class and we have to create an object if each class.
// 4)
#include <iostream>
using namespace std;

class Car
{
};

class City
{
public:
    int a, b; // data member
    void show()
    {
        cout << "First Class";
    }
};

int main()
{
    // Creating object of Car class.
    Car myCar;                     // no error : even though class is empty
    cout << sizeof(myCar) << endl; // 1 btye

    // Creating object of City class.
    City myCity;
    cout << sizeof(myCity) << endl; // 8 bytes (2 integers)
    myCity.a = 90;
    myCity.show();
}