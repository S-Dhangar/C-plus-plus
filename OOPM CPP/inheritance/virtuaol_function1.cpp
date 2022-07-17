#include<iostream>
using namespace std;
class one{
    private:
    int a;
    public:
    
    void get(int num){
        a=num;
    }
    void show(){
        cout<<a;
    }
};

class two:public one{
    public:
    int b=6;
    
    void show(){
        cout<<b;
    }
};


int main()
{
    two t,t1;
    t.get(5);
    t.show();
    cout<<endl;
    t.one::show();
    return 0;
}