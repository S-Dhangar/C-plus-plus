#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A() { x = 20; }
    void showx()
    {
        cout << "\n x=" << x;
    }
};
class B : public A
{
public:
    int y;
    B() { y = 30; }
    void show()
    {
        showx();
        cout << "\n y=" << y;
    }
};
int main()
{
    B b;
    b.show();
    return 0;
}