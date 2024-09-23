#include <iostream>
#include <string.h>
using namespace std;

class tcs
{
public:
    char name[20];
    int sal;

    tcs() {}
    tcs(char name[20], int sal)
    {
        strcpy(this->name, name);
        this->sal = sal;
    }
    void display()
    {
        cout << "Name: " << name << ", Salary: " << sal << endl;
    }
};

int main()
{
    tcs t("adi", 50000);
    t.display();
}