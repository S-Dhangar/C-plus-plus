#include<iostream>
using namespace std;

class b1{
    int a;
    public:
    void set(int x){
        a=x;
    }

    void show(){
        cout<<a<<endl;
    }
};

class b2{
    int b;
    public:
    void set(int y){
        b=y;
    }

    void show(){
        cout<<b<<endl;
    }
};


class b: public b1,public b2{
public:
void display(){
   b2:: show();
}
};
int main(){
    b1 one;
    one.set(5);
    b2 two;
    two.set(6);

    b cl;
    cl.display();  
    
}