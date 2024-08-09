// According to C language  , Structure  is collection of user defined data type.
// But according to c++ , strcuture is collection of user defined data type  as well as user defined functions.
// it is used it store heterogeneous data type.

#include <iostream>
#include <string.h>
using namespace std;

struct student
{ // student is a datatype
    int roll_no;
    char name[30];
    // string name[30];
    float marks;
};
int main()
{
    struct student s;
    s.roll_no = 20;
    strcpy(s.name, "John Doe"); // strcpy is used to copy string from one array to another
    s.marks = 85.5;
}