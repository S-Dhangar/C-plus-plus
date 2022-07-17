

// example of virtual base classs




#include<iostream>
using namespace std;


class student{
    protected:
    int roll_number;
    public:
    void set_roll(int a){    
        roll_number=a;
        cout<<roll_number<<" ";
    }

} sd;
// we have to declarethis class virtual in the derived classes

class test: public virtual student{
    int mark1;
    public:
    void set_mark1(int mark){
        mark1=mark;
    }
    void show1(){
        cout<<mark1;
    }

};

class exam: public virtual student{
    int mark2;
    public:
    void set_mark2(int mark){
        mark2=mark;
    }
    void show2(){
        cout<<" "<<mark2;
    }
};


class result:public test,public exam{
    public:
    void display(){
       show1();
       show2();
    }
};
int main(){
    result shubham;
    shubham.set_roll(537);
    shubham.set_mark1(100);
    shubham.set_mark2(200);
    shubham.display();
}