#include <iostream>
using namespace std;
// friend fn is used to access the privat enad protected data member , outside of a class.
// friend fn should be declared in both classes but defined outside of class

class tenth2;
class tenth1
{
    int marks = 90;
    friend void result(tenth1, tenth2);
};

class tenth2
{
    int marks = 85;
    friend void result(tenth1, tenth2);
};
// friend function
void result(tenth1 obj1, tenth2 obj2)
{
    if (obj1.marks > obj2.marks)
    {
        cout << "tenth1 got the higher marks: " << obj1.marks << endl;
    }
    else
    {
        cout << "tenth2 got the higher marks: " << obj2.marks << endl;
    }
}

int main()
{
    tenth1 obj1;
    tenth2 obj2;
    result(obj1, obj2);
    return 0;
}