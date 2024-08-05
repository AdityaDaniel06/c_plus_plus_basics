#include <iostream>
using namespace std;

void table(int num)
{
    if (num > 0)
    {
        cout << "The multiplication table of " << num << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << num << " * " << i << " = " << num * i << endl;
        }
    }
    else
    {
        cout << "Invalid Input!!!";
    }
}

int main()
{
    int no;
    cout << "Enter the number between 1 and 100 ";
    cin >> no;
    table(no);

    return 0;
}