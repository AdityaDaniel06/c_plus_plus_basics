#include <iostream>
using namespace std;

class weight
{
private:
    int kg, gm;

public:
    weight(int k = 0, int g = 0)
    {
        kg = k;
        gm = g;
    }

    weight operator+(weight &w)
    {
        weight obj;
        // weight obj1(10, 20);
        obj.kg = kg + w.kg;
        obj.gm = gm + w.gm;
        return obj;
    }
    void show()
    {
        cout << "Kilogram = " << kg << " &" << "grams " << gm;
    }

    // void operator+ ( weight &w){
    //     kg += w.kg;
    //     gm += w.gm;
    //      cout << "Kilogram = " << kg << " &" << "grams " << gm;
    // }
};
int main()
{
    weight w1(20, 130);
    weight w2(15, 510);
    weight w3 = w2 + (w1); // opertor overLoad
    w3.show();

    // w2+w1;
}