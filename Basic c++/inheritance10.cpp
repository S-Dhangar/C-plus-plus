// Hybrid Inheritance //
#include<iostream>
using namespace std;
class PLAYER
{
protected:
char name[15];
char gender;
int age;
};
class PHYSIQUE : public PLAYER
{
protected:
float height;
float weight;
};
class LOCATION
{
protected:
char city[10];
char pin[7];
};
class GAME : public PHYSIQUE, LOCATION
{
protected:
char game[15];
public:
void getdata()
{
cout<<"Enter Following Information\n";
cout<<"Name:"; 
cin>>name;
cout<<"Gender:"; 
cin>>gender;
cout<<"Age:"; 
cin>>age;
cout<<"Height:"; 
cin>>height;
cout<<"Weight:"; 
cin>>weight;
cout<<"City:"; 
cin>>city;
cout<<"Pincode:"; 
cin>>pin;
cout<<"Game:"; 
cin>>game;
}
void show()
{
cout<<"\n Entered Information";
cout<<"\nName:"; 
cout<<name;
cout<<"\nGender:"; 
cout<<gender;
cout<<"\nAge:"; 
cout<<age;
cout<<"\nHeight:"; 
cout<<height;
cout<<"\nWeight:"; 
cout<<weight;
cout<<"\nCity:"; 
cout<<city;
cout<<"\nPincode:"; 
cout<<pin;
cout<<"\nGame:"; 
cout<<game;
}
};
int main()
{

GAME G;
G.getdata();
G.show();
return 0;
}