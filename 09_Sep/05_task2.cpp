#include <iostream>
#include <string.h>
using namespace std;

class tcs
{
public:
    char name[20];
    int sal;

    tcs(char name[], int sal)
    {
        this->sal = sal;
        strcpy(this->name, name);
    }
};

int main()
{
    tcs t("aditya", 50000);
}