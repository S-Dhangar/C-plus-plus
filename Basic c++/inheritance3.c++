// private inheritance
#include<iostream>
using namespace std;
class A
{
public:
int x;
};
class B : private A 
{
public:
int y;
B()
{x=20;
y=40;
}
void show()
{cout<<"\n x="<<x;
cout<<"\n y="<<y;
}
};
int main()
{
B b; 
b.show();
              
return 0;

}