
#include<iostream>
using namespace std;

class parent{
  
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
class child : public parent{
   public:
   

};







int main(){
    parent s;
    s.get_data(100000);
   
    child sd;
    cout<<sd.money<<endl;
    return 0;
}