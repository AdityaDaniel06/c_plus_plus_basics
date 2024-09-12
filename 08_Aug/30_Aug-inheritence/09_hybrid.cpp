#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout << "Class A" << endl;
    }
};
class B : virtual public A
{
public:
    void f2()
    {
        cout << "Class B" << endl;
    }
};
class C : virtual public A
{
public:
    void f3()
    {
        cout << "Class C" << endl;
    }
};
class D : public B, public C
{
public:
    void f4()
    {
        cout << "Class D" << endl;
    }
};
int main()
{
    D obj;
    obj.f2();
    obj.f3();
    // obj.f1(); // multi path inhertience problem: ambiguous two path to call the same function
    // Solution: Virtual class
}