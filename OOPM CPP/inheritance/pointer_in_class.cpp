#include<iostream>
using namespace std;

// replacing dot operatotr by arrow operator

class A{
      int a;
    int b;
    public:
    void get_data(int x,int y){
        a=x;
        b=y;
        cout<<x<<" "<<y;
    }
};
int main()
{
    A ob;
    A *ptr=&ob;
    //(*ptr).get_data(5,6);
    // other way is
  //  ptr->get_data(5,6);
  
  // making array of objects
  A *ob1=new A[3];
    ob1->get_data(7,8);
    cout<<endl;
    ob1++;
    ob1->get_data(9,10);
    cout<<endl;
    ob1++;
    ob1->get_data(11,12);
    return 0;
}