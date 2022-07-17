#include<iostream>
using namespace std;

 // derived class will call constructors on the basis of sequence of inheritance
 // they does not called on the basis of constructor called


class A{
    int a,b;
    public:
    A(int x,int y){
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
    void display1(){
        cout<<a<<" "<<b<<endl;
    }
};

class B{
    int a, b;
    public:
    B(int x,int y){
       a=x;
       b=y;
    cout<<a<<" "<<b<<endl;
    }
void display2(){
        cout<<a<<" "<<b<<endl;
    }

};

class C:public A,public B{
    int data;
     public:
     C(int x,int y,int z,int a,int b):B(z,a),A(x,y){  // derived class will call constructors on the basis of sequence of inheritance
         data=b;
         cout<<data;
     }
     void display(){
         cout<<data;
     }

};


int main()
{
   
    C s3(7,8,9,10,11);
   
    
    return 0;
}