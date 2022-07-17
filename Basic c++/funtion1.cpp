//Function overloading
#include <iostream>
using namespace std;
class Add
{
  public:
  int sum(int num1,int num2) 
  {
      return num1+num2;
  }
   int sum(int num1,int num2, int num3) 
  {
       return num1+num2+num3;
   }
};
int main() 
{
    Add obj;
    cout<<"sum of function first=";
    cout<<obj.sum(2,3)<<endl;
    cout<<"Sum of function second=";
    cout<<obj.sum(2,3,5);
}