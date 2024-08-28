#include <iostream>
using namespace std;
//  reward is composite class ---- has a relationship class
// it holds the object of another class, defined earlier and with the help of it ,
// it call/ invokes the member function of earlier class, inside a function
class client
{

public:
    void virus()
    {
        cout << "Virus detected from SBI Bank" << endl;
    }
};

class reward
{
    client c;

public:
    void dollar()
    {
        cout << "50000 dollars rewards from SBI Bank" << endl;
        c.virus(); // Calls virus() from client class through reward object line 29
    }
};

int main()
{
    reward r;
    r.dollar();
}