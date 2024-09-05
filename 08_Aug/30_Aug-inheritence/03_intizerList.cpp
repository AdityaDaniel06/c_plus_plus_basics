#include <iostream>
using namespace std;

class atm
{
public:
    atm(int cardNo)
    {
        cout << "Card number: " << cardNo;
    }
};
class customer : public atm
{
public:
    customer(int cardNo, int p) : atm(cardNo) // intialising base class contructor through child call
    {
        cout << "password!" << p << endl;
    }
};

int main()
{
    customer c(123456, 1234);
    return 0;
}