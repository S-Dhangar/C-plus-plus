#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class cpy_constructor
{
private:
    /* data */
    int x,y;
public:
cpy_constructor();
    
  void get(){
      cout<<x<<" "<<y<<endl;
  }
};

cpy_constructor::cpy_constructor(/* args */)
{
    cin>>x>>y;
}



int main()
{
    
    cpy_constructor o1;
    cpy_constructor o2(o1);
    o2.get();
    return 0;
}