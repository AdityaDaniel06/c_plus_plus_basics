#include <iostream>
using namespace std;

void primeNumber(int n)
{
    bool prime = false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = true;
            cout << n << "is not prime" << endl;
            break;
        }
    }
    if (!prime)
    {

        cout << "is a prime number";
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    primeNumber(n);
}
