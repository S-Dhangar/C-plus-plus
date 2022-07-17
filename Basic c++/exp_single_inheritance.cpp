#include<iostream>
using namespace std;
class A{
    int a;
    public:
    int b;
    void get_ab();
    int get_a();
    void show_a(); 
};
class B:public A{
    int c;
    public:
    void mul();
    void display();

};
void A::get_ab(){
      a=5;b=6;
}
int A:: get_a(){
      return a;
}
void A::show_a(){
    cout<<"a = "<<a<<"\n";
}
void B::mul(){
   c=b*get_a();
}
void B::display(){
   cout<<"a = "<<get_a()<<"\n";
   cout<<"b = "<<b<<"\n";
   cout<<"c = "<<c<<"\n";
}
int main(){
    B d;
  d.get_ab();
    d.get_a();
  d.show_a();
   d.mul();
    d.display();
  d.b=20;
    d.mul();
   d.display();

    
    return 0;
}