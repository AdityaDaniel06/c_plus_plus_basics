#include <iostream>
#include <thread>
using namespace std;

void even(int s, int e)
{
    for (s; s <= e; s++)
    {
        if (s % 2 == 0)
        {
            cout << s << "Even" << endl;
        }
    }
}

void odd(int s, int e)
{
    for (s; s <= e; s++)
    {
        if (s % 2 != 0)
        {
            cout << "ODD" << s << endl;
        }
    }
}

int main()
{
    thread t1(even, 1, 100);
    thread t2(odd, 1, 100);

    t1.join();
    t2.join();

    cout << "taskEnded" << endl;
}