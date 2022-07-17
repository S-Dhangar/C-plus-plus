#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n,num,pos,r1,r2;
       for(int i=0;i<n;i++){
           cin>>num;
           v.push_back(num);
       }
       cin>>pos;
       v.erase(v.begin()+pos);
       cin>>r1>>r2;
       v.erase(v.begin()+r1,v.begin()+r2);
       cout<<v.size();
       for(auto i=v.begin();i<v.end();i++){
           cout<<*i<<" ";
       }
    return 0;
    
}
