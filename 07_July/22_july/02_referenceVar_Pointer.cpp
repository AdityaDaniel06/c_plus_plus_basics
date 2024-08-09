#include <iostream>

using namespace std;
int main()
{
    int n = 10;
    int &b = n;
    // Review
    // b is called a referance varible
    // it is used to refera the address of previous variable address ,
    // it doesn't occucy any space  OR we can say that it is aliasing name of preivious variable
    cout << "The value of n is: " << n << endl; // n
    cout << "The value of b is: " << b << endl; // b
    n++;
    cout << "The value of n is: " << n << endl;
    cout << "The value of b is: " << b << endl;
    b++;
    cout << "The value of n is: " << n << endl;
    cout << "The value of b is: " << b << endl;

    // Pointer: never stores any value , it always stores address of a variable
    int a = 300;
    int *p = &a;
    cout << "Address of p " << &p << endl;
    cout << "value of p " << *p << endl; // de-reference
    // cout << "The value of b (which is a reference to n) is: " << b << endl;
    // cout << "The address of b (which is a reference to n) is: " << &b << endl;

    int arr[] = {12, 1, 2, 3, 4, 5, 6, 7};
    cout << *arr;       // 12 by default pointer at index 0
    cout << *arr + 2;   // 14
    cout << *(arr + 2); // 3

    int i = 11;
    int *ptr = &i;
    int **c = &ptr;

    cout << c << endl;
    cout << **c; // double pointer (pointer to pointer)
    return 0;
}
