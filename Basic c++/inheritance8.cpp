// Multiple Inheritance //
#include <iostream>
using namespace std;
class A
{
protected:
    int a;
};
class B
{
protected:
    int b;
};
class C
{
protected:
    int c;
};
class D
{
protected:
    int d;
};
class E : public A, B, C, D
{

    int e;

public:
    void getdata()
    {
        cout << "\n Enter values of a,b,c & d & e:";
        cin >> a >> b >> c >> d >> e;
    }
    void showdata()
    {
        cout << "\n a=" << a << " b=" << b << " c = " << c << " d= " << d << " e=" << e;
    }
};
int main()
{

    E x;
    x.getdata();
    x.showdata();
    return (0);
}