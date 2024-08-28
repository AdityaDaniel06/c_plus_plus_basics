#include <iostream>
using namespace std;

class atm
{
    int code, pwd;

public:
    atm(int c, int p)
    {
        code = c;
        pwd = p;
    }

    void show()
    {
        cout << "ATM Code: " << code << endl;
        cout << "Password: " << pwd << endl;
    }
};
int main()
{
    // input arguments can be taken user and passed.
    atm a(1011, 2002);
    a.show();
}