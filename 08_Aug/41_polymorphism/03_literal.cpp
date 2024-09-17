// self evaluted value are called literal
//  Integral : Decimal , octal  hexadecimal
//  float: E/e , E- /e-
//  character: '' , "" , string

#include <iostream>
using namespace std;

int main()
{
    int c = 012;
    cout << c; // 10

    int d = 0x12;
    cout << d; // 18

    float e = 12.3456789;
    cout << e; // 12.3456789

    float f = 13.32E2; //  E2 = 10**2
    cout << f;         // 13320.0

    float g = 11.5E-4; //

    char h = 'a';
    cout << h; // a

    char i = 'acsaat';
    cout << i; // t

    // char j = "acsaat"; // error
    char j[] = "assat";
}