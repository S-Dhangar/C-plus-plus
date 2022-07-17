// show single inheritance between two classes.
#include<iostream>
using namespace std;
class ABC
{
protected:
char name[15];
int age;
};
class abc : public ABC
{
float height;
float weight;
public:
void getdata()
{
cout<<"\n Enter Name and Age:";
cin>>name>>age;
cout<<"\n Enter Height and Weight:";
cin>>height >>weight;
}
void show()
{
cout<<"\n Name:"<<name <<"\n Age:"<<age<< "Years";
cout<<"\n Height:"<<height <<" Feets"<<"\n Weight:"<<weight<<"Kg.";
}
};
int main()
{

abc x;
x.getdata(); 
x.show(); 
return 0;
}