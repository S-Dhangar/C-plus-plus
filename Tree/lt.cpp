#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int insert(vector<int> &v){
    v.push_back(5);
    v.push_back(6);
    return 0;
}
int main()
{
    vector<int> vec;
    insert(vec);
    cout<<vec.size();
    return 0;
}