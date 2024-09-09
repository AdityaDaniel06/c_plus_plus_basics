#include <iostream>
using namespace std;

class faculty
{
public:
    void teach()
    {
        cout << "Faculty teaching" << endl;
    }
};

class sub1 : public faculty
{
public:
    void sub1Teach()
    {
        cout << "Subject 1 teaching" << endl;
    }
};
class sub2 : public faculty
{
public:
    void sub2Teach()
    {
        cout << "Subject 2 teaching" << endl;
    }
};
class sub3 : public faculty
{
public:
    void sub3Teach()
    {
        cout << "Subject 3 teaching" << endl;
    }
};

int main()
{
    sub1 s1;
    sub2 s2;
    sub3 s3;
}