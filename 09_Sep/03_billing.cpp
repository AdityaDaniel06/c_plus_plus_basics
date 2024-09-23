#include <iostream>
using namespace std;
#define n 20
class shopping
{
    int itemcode[n];
    int price[n];
    int cnt;

public:
    shopping() // default constructor
    {
        cnt = 0;
    }

public:
    void getOrder();
    void display();
    void cancel();
};

void shopping::getOrder()
{
    cout << "Enter itemcode: " << endl;
    cin >> itemcode[cnt];
    cout << "Enter price: " << endl;
    cin >> price[cnt];
    cnt++;
}

void shopping::display()
{
    for (int i = 0; i < cnt; i++)
    {
        cout << "Itemcode: " << itemcode[i] << ", Price: " << price[i] << endl;
    }
}

void shopping::cancel()
{
    cout << "Enter itemcode to cancel: " << endl;
    int code;
    cin >> code;
    for (int i = 0; i < cnt; i++)
    {
        if (itemcode[i] == code)
        {
            price[i] = 0;
        }
    }
}
int main()
{
    shopping s;
    int c;
    char ch;
    do
    {
        cout << "Shopping Cart" << endl;
        cout << "1. Add Order" << endl;
        cout << "2. Display Order" << endl;
        cout << "3. Cancel Order" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            s.getOrder();
            break;
        case 2:
            s.display();
            break;
        case 3:
            s.cancel();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (ch == 'y');
}