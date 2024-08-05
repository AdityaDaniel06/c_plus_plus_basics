#include <iostream>
#include <string.h>

using namespace std;

// Pre defined string functions
//  1) strlen(c) == returns length of string

int main()
{
    char s[20], n[40] = "Bhopal";

    // cout << "Enter a string: ";
    // cin >> s;
    // cout << "Length of the string: " << strlen(s) << endl;
    // cout << "string UPPER : " << strupr(s) << endl;
    // cout << "string lower: " << strlwr(s) << endl;
    // cout << "string concat: " << strcat(s, n) << endl; // concat
    // cout << "string lower: " << strrev(s) << endl;

    // strcpy(s, n); // copy string
    // if (strcmp(s, "sunday") == 0)
    // { // compare string
    //     cout << "password match";
    // }

    // if (stricmp(s, "SuNday") == 0)
    // { // campare string Ingore Case
    //     cout << "password match";
    // }

    /// WAP to check given string is palindrome or not
    char name[30];
    cout << " Enter a string";
    cin >> name;
    char revStr[strlen(name)];

    if (strcmp(name, revStr) == 0)
    {
        cout << "Palindrome :";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}