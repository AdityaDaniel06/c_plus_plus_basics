#include <iostream>
using namespace std;
// Order of memory allocation and deletion
// calling order RBI--> Sbi --> customer.
// order of memory release Customer--> Sbi--> Rbi

class Rbi
{
public:
    Rbi()
    {
        cout << "RBI Class" << endl;
    }
    ~Rbi()
    {
        cout << "RBI Class destructor" << endl;
    }
};

class Sbi : public Rbi
{
public:
    Sbi()
    {
        cout << "SBI Class" << endl;
    }
    ~Sbi()
    {
        cout << "SBI Class destructor" << endl;
    }
};

class Customer : public Sbi
{
public:
    Customer()
    {
        cout << "Customer Class" << endl;
    }

    ~Customer()
    {
        cout << "Customer Class" << endl;
    }
};

main()
{
    Customer cust;
}