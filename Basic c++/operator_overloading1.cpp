// Operator Overloading
#include <iostream>
using namespace std;
class Demo
{
  int a,b;
  public :
    void setdata(int x,int y)
    {
      a=x,b=y;
    }
    void showdata()
    {
      cout<<"a="<<a<<endl;
      cout<<"b="<<b;
    }  
   Demo operator +(Demo d) 
   {
     Demo temp;
     temp.a=a+d.a;
     temp.b=b+d.b;
     return temp;
   }
};
int main()
{
  Demo d1,d2,d3;
  d1.setdata(5,6);
  d2.setdata(5,6);
  d3=d1+d2;
  d3.showdata();
 return 0;
}