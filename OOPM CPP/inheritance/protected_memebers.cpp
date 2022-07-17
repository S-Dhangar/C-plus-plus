#include<iostream>
using namespace std;

class parent{
  protected:
   int wealth;

   public:

   int money=600;
   
   void get_data(int a){
      
       wealth=a;

       money=a;
      
   }

 void display(){
        cout<<money;
    }

};
class child : protected parent{
 public:
 
   

};


int main(){
    parent s;
    s.get_data(100000);
   
    child sd;
   sd.display();// will not run because display function has become protected here 
    return 0;
}