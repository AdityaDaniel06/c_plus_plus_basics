#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str[20];
    cout << " Enter String";
    cin >> str;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 68 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }

    cout << str;
}