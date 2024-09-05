#include <iostream>
using namespace std;

class rbi
{
    const int rate; // const cannot be reintialized normally
    int amount;

public:
    rbi(int r, int amount) : rate(r), amount(amount) // Intilaizer List
    {
    }
};
int main()
{
    rbi r(8, 100000);
}