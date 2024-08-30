#include <iostream>
using namespace std;

class atm
{
    int amount;

public:
    atm(int a)
    {
        amount = a;
    }
    // deep copy constructor --takes memory

    void show()
    {
        cout << "Your current balance is: $" << amount << endl;
    }
};
int main()
{
    atm k(10000);
    k.show(); // 10000

    atm k2 = k; // implicit assignment copy constructor
    k2.show();  // 10000

    atm t(k); // Review shallow copy constructor--- it is built in
    t.show(); // 10000
}