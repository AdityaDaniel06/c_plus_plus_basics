#include <iostream>
using namespace std;
// recursion ----------------
// Head Recursion: First function call then output
// Tail Recursion : value printed and the recursive call

// 1) base case
// 2) recursive call

int desc(int n)
{
    if (n == 0)
    {
        return 0;
    }

    // head recursion
    desc(n - 1);
    cout << n;
}
int descT(int n)
{
    if (n == 0)
    {
        return 0;
    }

    // tail recursion
    cout << n;
    descT(n - 1);
}
int main()
{
    desc(5);  // 1 2 3 4 5
    descT(5); // 5 4 3 2 1
}