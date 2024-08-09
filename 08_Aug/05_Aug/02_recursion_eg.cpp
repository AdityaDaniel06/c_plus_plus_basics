#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1) // base case
        return 1;
    else
        return n * factorial(n - 1);
}

int power(int n, int e)
{
    if (e == 0)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n * power(n, e - 1);
    }
}

int fibonacci(int n)
{ // O(2^n)
    if (n == 0 || n == 1)
    {
        return n;
    }
    int f1 = fibonacci(n - 1);
    int f2 = fibonacci(n - 2);
    return f1 + f2;
}

int main()
{

    cout << "Factorial" << factorial(5) << endl;
    cout << power(4, 3) << endl;
    cout << fibonacci(4);
}