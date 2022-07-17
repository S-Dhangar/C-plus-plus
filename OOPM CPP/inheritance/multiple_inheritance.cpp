#include<iostream>
using namespace std;


class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int=b;
    }

};


class derived: public base1,public base2{
    public:
    void show(){
        cout<<"The value of base1 int is "<<base1int<<endl;
        cout<<"The value of base2 int is "<<base2int<<endl;    
    }
};


/**************************  How is it working **************************************

After deriving data memebers and functions they are behaving like this


    Data members:
        base1int-----> protected
        base2int-----> protected
    member functions:
        set_base1int()--->public
        set_base2int()--->public
        show()----------->public

****************************************************************************************/




int main(){
    derived shubham;
    shubham.set_base1int(25);
    shubham.set_base2int(30);
    shubham.show();
}