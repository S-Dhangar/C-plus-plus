//files and streams 
#include<iostream>
using namespace std;
class student
{
int rollno;
char name[20];
public:
friend void operator<<(ostream&, student &);
friend void operator>>(istream&, student &);
};
 void operator<<(ostream& out, student & s)
{
cout<<s.rollno<<endl;
cout<<endl;
out<<s.name;
}
 void operator>>(istream& in, student & s)
{
in>>s.rollno;
in>>s.name;
}
int main()
{
student s1;
cout<<"\n input student details==";
cin>>s1;
cout<<"\n details of student";
cout<<s1;
return(0);
}




