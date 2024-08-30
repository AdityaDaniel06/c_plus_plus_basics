#include <iostream>
using namespace std;
// deep copy occupies extra space , we have to create deep copy as className using like datatype alone with refernce
class atm
{
    int amount, *loc;

public:
    atm(atm &t)
    {
        amount = t.amount;
        loc = new int;   // create new memory during run time
        *loc = *(t.loc); //  pointer to pointer coversion
    }

    atm(int amt, int address)
    {
        amount = amt;
        loc = &address;
    }

    void transaction(int a)
    {
        amount = amount + a;
        *loc = *loc + 1;
    }

    void show()
    {
        cout << "balance" << amount << endl;
        cout << "location" << *loc << endl;
    }
};
int main()
{
    atm mpnagar(1000, 101);
    atm bhel(mpnagar); // deep copy
    mpnagar.show();
    bhel.show();
    mpnagar.transaction(10000);
    mpnagar.show();
    bhel.show();
}