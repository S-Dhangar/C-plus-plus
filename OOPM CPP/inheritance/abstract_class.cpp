#include<iostream>
using namespace std;

class shape{
   
public:
int a,b,r;
 virtual void area()=0;
void display(){
    cout<<"It is base class";
}
};
class rec:public shape{
   
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    void area(){
        cout<<a*b;
    }

};
class tri: public shape{
    
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    void area(){
        cout<<(.5*a*b);
    }
};

int main()
{
    shape *sh;
    sh->display();
    rec r1;
    tri t1;

    r1.get(5,6);
    t1.get(5,6);
    sh=&r1;
    sh->area();
    cout<<endl;
    sh=&t1;
    sh->area();
    
    return 0;
}