//create multilevel inheritance. Create classes A1, A2, and A3.

#include<iostream>
using namespace std;
class A1 
{
protected:
char name[15];
int age;
};
class A2 : public A1 
{
protected:
float height;
float weight;
};
class A3 : public A2 
{
protected:
char sex;
public:
void get()
{
cout<<"Name:"; cin>>name;
cout<<"Age:"; cin>>age;
cout<<"Sex:"; cin>>sex;
cout<<"Height:"; cin>>height;
cout<<"Weight:"; cin>>weight;
}
void show() 
{
cout<<"\nName:" <<name;
cout<<"\nAge:" <<age <<" Years";
cout<<"\nSex:" <<sex;
cout<<"\nHeight:" <<height <<" Feets";
cout<<"\nWeight:" <<weight <<" Kg.";
}
}; int main()
{

A3 x; 
x.get(); 
x.show();

return (0);
}