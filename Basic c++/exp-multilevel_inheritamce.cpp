#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void get_number(int a){
        roll_number=a;
    }
    void set_number(){
        cout<<"students roll number is "<<roll_number<<endl;
    }

};
class exam:public student{
    protected:
    int sub1,sub2;
    public:
    void getmarks(int a,int b){
        sub1=a;
        sub2=b;
    }
    void setmarks(){
        cout<<"students marks in sub1 is "<<sub1<<endl<<" students marks in sub2 is "<<sub2<<endl; 
    }   
};
class result:public exam{
    private:
    float percentage;
    public:
    void display(){
        
        cout<<"students percentages are "<<(sub1+sub2)/2;
    }
};
int main(){
    result s;
    s.get_number(530);
    s.set_number();
    s.getmarks(45,67);
    s.setmarks();
    s.display();
    return 0;
}