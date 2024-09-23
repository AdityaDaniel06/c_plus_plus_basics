#include <iostream>
using namespace std;
// count number of object

class cardholder
{
    static int n;

public:
    cardholder()
    {
        n++;
        cout << n;
    }
};

int cardholder::n = 0;

int main()
{
    cardholder c1;
    cardholder c2;
    cardholder c3;
}