#include<iostream>
using namespace std;

// constructor of base class will call first in this sinfle inheritance

class A{
    public:
    A(){
      
        cout<<"I am Class A's constructor"<<endl;
    }
};
class B:public A{
    public:
    B(int x){
        cout<<x<<" "<<"I am class B's constructor";
    }
};
int main()
{
    B ob(5);
   
    return 0;
}