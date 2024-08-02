#include <iostream>
#include <string.h>

using namespace std;

// Pre defined string functions
//  1) strlen(c) == returns length of string

int main()
{
    char c[20];
    cout << "Enter a string: ";
    cin >> c;
    cout << "Length of the string: " << strlen(c) << endl;
    return 0;
}