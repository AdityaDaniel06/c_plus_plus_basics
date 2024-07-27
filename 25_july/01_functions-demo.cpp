// used for reusablity
// saves memory
// saves time also
// there are two type of functions in c++ : predefined and user defined functions
// user defined functions are of two types:
// 1) function returns a value 2) fn that does not return a value.
// 1) fn that takes parameter 2) fn does not take any parameters.

// Types of parameters 1) actual parameters/ agruments(fn calling) 2)formal parameters(function defination)
// default arguments: only last parameter can be set to default

// types of function calling 1) explicit:called upon  2)implicit : called on their own

#include <iostream>
using namespace std;

void show()
{
    cout << "Hello World!";
}

void sum(int a, int b)
{
    cout << a + b;
}

int main()
{
    show();
    sum(5, 10);
}