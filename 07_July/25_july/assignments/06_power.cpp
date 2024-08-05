#include <iostream>
using namespace std;

void pow(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }
    cout << "Result is : " << result << endl;
}

int main()
{
    int n, r;
    cout << " Enter the number and the power";
    cin >> n >> r;
    pow(n, r);
}