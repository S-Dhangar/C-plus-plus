#include<iostream>
using namespace std;
class students{
    int age;
    string name;
    public:
    void get_data(int a,string b){
        age=a;
        name=b;
    }
   void display();
};
void students:: display(){
        cout<<"age is "<<age<<endl<<"name is "<<name<<endl;
    }
int main(){
    students s1;
    s1.get_data(22,"shubham");
    s1.display();
    s1.get_data(22,"Dhangar");
    s1.display();
}