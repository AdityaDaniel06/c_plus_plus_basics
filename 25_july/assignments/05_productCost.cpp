#include <iostream>
using namespace std;

int calculateTotal(int n)
{
    return n * 500;
}

int main()
{
    int qty;
    cout << "Enter Qunatity ";
    cin >> qty;
    int finalCost = calculateTotal(qty) + calculateTotal(qty) * 0.1;
    cout << "Final Cost: " << finalCost;
    return 0;
}