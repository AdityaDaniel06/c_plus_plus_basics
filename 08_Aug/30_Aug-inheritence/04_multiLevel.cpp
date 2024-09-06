#include <iostream>
using namespace std;
// in a multilevel inheritance we create more than two classes , and each subclass inheriteces the properties of pervious class.

class Rbi
{
public:
    void msgRbi()
    {
        cout << "RBI Class" << endl;
    }
};

class Sbi : public Rbi
{
public:
    void msgSbi()
    {
        cout << "SBI Class" << endl;
    }
};

class Customer : public Sbi
{
public:
    void msgCustomer()
    {
        cout << "Customer Class" << endl;
    }
};

main()
{
    Customer cust;
    cust.msgRbi();      // Output: RBI Class
    cust.msgSbi();      // Output: SBI Class
    cust.msgCustomer(); // Output: Customer Class
}