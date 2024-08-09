#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vec.push_back(61);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    // print all elements
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}