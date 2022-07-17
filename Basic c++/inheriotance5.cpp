// PROTECTED DATA //
#include<iostream>
using namespace std;
class A 
{
protected: 
int x;
};
class B : private A 
{
int y;
public:
B()
{
x=30;
y=40;
}
void show()
{
cout<<"\n x="<<x;
cout<<"\n y="<<y;
}
};
int main()
{
B b; 
b.show();
return 0;
}
