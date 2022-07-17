// hierarchical inheritance.
#include<iostream>
using namespace std;
class red
{
public:
red() {cout<<"Red";};
};
class yellow
{
public:
yellow() {cout<<"Yellow";}
};
class blue
{
public:
blue() {cout<<"Blue";}
};
class orange : public red, public yellow
{
public:
orange() {cout<<"=Orange";}
};
class green : public blue, public yellow
{
public:
green() {cout<<"=Green";}
};
class violet : public red, public blue
{
public:
violet() {cout<<"=Violet";}
};
class reddishbrown : public orange, public violet
{
public:
reddishbrown() 
{
cout<<"=Reddishbrown";}
};
class yellowishbrown : public green, public orange
{
public:
yellowishbrown() 
{
cout<<"=Yellowishbrown";}
};
class bluishbrown : public violet, public green
{
public:
bluishbrown()
 {
cout<<"=Bluishbrown";}
};
int main()
{

reddishbrown r;
endl(cout);
bluishbrown b;
endl(cout);
yellowishbrown y;
endl(cout);
return (0);
}