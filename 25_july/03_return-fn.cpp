#include <iostream>

using namespace std;
int increment()
{ // fn returns without argument
    return 1000;
}

int product(int x, int y)
{ // fn returns with argument
    int a = x * 500;
    int b = y * 1000;
    return a + b;
}

int main()
{
    int r = increment();
    cout << r + 2000 << endl;

    int prod1, prod2;
    cin >> prod1;
    cin >> prod2;
    cout << product(prod1, prod2) << endl;
    return 0;
}