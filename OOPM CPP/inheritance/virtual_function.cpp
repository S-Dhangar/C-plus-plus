#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    void get(int num){
        a=num;
    }
    void display(){
        cout<<a<<" this is base class"<<endl;
    }
};

class B:public A{
    public:
 
    void display(){
        cout<<"this is derived class";
    }
   
  
};
int main()
{     B b;
        b.get(5);
      A *ob = &b; 
      ob->display();
      
    return 0;
}