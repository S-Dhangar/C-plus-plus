#include <iostream>
using namespace std;
class Myclass
{
  public :
 void show(int a)
  {
    cout<<"Value of int ="<<a;
  }
 void show(double a)
  {
    cout<<"\nValue of double ="<<a;
  }
 void show (char a)
  {
    cout<<"\nValue of char ="<<a;
  }
 };

int main()
{
    Myclass ob;
    ob.show(5);
    ob.show(1.5);
    ob.show('c');
}

