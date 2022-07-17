

/* friend functin properties

1.  not in the scope of class
2.  to allo private data of a class 
3.  dont confuse in member functions and friend function both are differenet from each other
4.  cant call from object of class
*/


#include<iostream>
using namespace std;
class students{
    int age;
    string name;
    friend students add(students s1,students s2);
    public:
   

    void get_data(){
        int a;
        string b;
        cin>>a>>b;
        age=a;
        name=b;

       
    }
   void display();
};

students add(students s1,students s2){
  cout<<s1.age+s2.age;
}


void students:: display(){
        cout<<"age is "<<age<<endl<<"name is "<<name<<endl;
    }
int main(){
   students s1,s2;
   s1.get_data();
   s2.get_data();
    add(s1,s2);

   
}