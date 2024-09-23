#include <iostream>
using namespace std;

class Rbi // super class: as having a virtual fn

{
public:
    virtual void loan()
    {
        cout << "Loaned from RBI" << endl;
    }
};

class Sbi : public Rbi
{
public:
    void sbiAccount()
    {
        cout << "Account opened in SBI" << endl;
    }
    void loan()
    {
        cout << "Loaned from SBI" << endl;
    }
};
class Axis : public Rbi
{
public:
    void axisAccount()
    {
        cout << "Account opened in Axis" << endl;
    }
    void loan()
    {
        cout << "Loaned from Axis" << endl;
    }
};
int main()
{
    Rbi *ptr; // pointer object
    Sbi s;
    ptr = &s;
    ptr->loan(); // Calls Sbi::loan()
}