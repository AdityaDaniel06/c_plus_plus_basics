#include <iostream>
using namespace std;

class Rbi
{
public:
    virtual void loan() = 0;
    // when a class is having a pure virtual fn then class becomes an abstract class.
    // in abstract class normal fn cannot be used.
    // it is compulsory to redefine pure virtual fn in every derived class.
    // only pointer object is allowwed , NO normal object can be created
};

class Sbi : public Rbi
{
public:
    void loan()
    {
        cout << "Sbi loan" << endl;
    }
};

class Pnb : public Rbi
{
public:
    void loan()
    {
        cout << "Pnb loan" << endl;
    }
};
int main()
{
    Rbi *r;
    Pnb p;
    Sbi s;
    r = &s;
    r->loan(); // Calls Sbi::loan()
}