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
        void display(x &a){
            cout<<data<<endl;
        }
    friend void swap(x&,y&);
    };
class y{
    private:
    int num;
    public:
    void setdata(int b){
        num=b;
        }
void display(y &b){
    cout<<num;
}
        friend void swap(x &,y &);
    };
void swap(x &a,y &b){
    int temp=b.num;
    b.num=a.data;
    a.data=temp;
}
int main(){
    x s;
    s.setdata(6);
    y t;
    t.setdata(4);
    swap(s,t);
    s.display(s);
    t.display(t);
    return 0;
}