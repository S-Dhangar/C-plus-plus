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
    two t;
    one *ptr= &t;
    ptr->get(5);
    ptr->show();
    
    return 0;
}