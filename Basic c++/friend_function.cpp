#include<iostream>
using namespace std;
class y;
class x{
    private:
    int data;
    public:
    void setdata(int a){
        data=a;
        }
    friend void sum(x,y);
    };
class y{
    private:
    int num;
    public:
    void setdata(int b){
        num=b;
        }
        friend void sum(x,y);
    };

void sum(x c,y d){
    cout<<"sum of y data and x data is "<<c.data+d.num;
}
int main(){
    x s;
    
    s.setdata(4);
    y t;
    t.setdata(5);
    sum(s,t);
    return 0;
}