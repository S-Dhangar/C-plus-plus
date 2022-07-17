#include<iostream>
using namespace std;

float area(float r)
{
cout<<"after entering value of radius";
return 3.14*r*r;
}
float area(float b,float h)
{
return 0.5*b*h;
}
float volume(float r,float h){
return 3.14*r*r*h;}
float volume(float a){
return a*a*a;}
int main()
{ float area1=area(1.5);
cout<<"area of circle is = "<<area1<<endl;
cout<<"area of triangle is= "<<area(2.0,3.5)<<endl;
cout<<"volume of cylinder is = "<<volume(3.0,7.0)<<endl;
cout<<"volume of cuboid is = "<<volume(5.0)<<endl;

}