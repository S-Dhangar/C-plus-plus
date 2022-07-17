#include<iostream>
using namespace std;
class A{
    int a;
    public:
     void set_data(int a){
        this-> a=a;  // this is a pointer which is used to remove confusion of compiler
     }
     void get_data(){
         cout<<a;
     }
};
int main()
{
    A a;
    a.set_data(5);
    a.get_data();

    return 0;
}

 