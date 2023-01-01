#include<iostream>

using namespace std;

class students
{
private:
     int marks;
public:
    students(){
        marks=0;
    }
    students(int data){
        marks=data;
    }
    students operator /(students s1);
   void print(){
        cout<<marks;
    }
};

students students:: operator/(students s1){
    students st;
    st.marks=marks+s1.marks;
    return st;
}  

int main()
{
   students st(100),st1(200);
    students st3;
    st.print();
    st3=st/st1;
    cout<<endl;
    st3.print();
    return 0;
}