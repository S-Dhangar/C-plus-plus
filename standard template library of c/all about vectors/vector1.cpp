#include<iostream>
#include<vector>
using namespace std;

int main(){
    int length,n;
    vector<int> a;
    cout<<"enter the length of the vector";
    cin>>length;
    cout<<"enter the array ";
    for(int i=0;i<length;i++){
        cin>>n;
        a.push_back(n);
    }
  cout<<"vector is ";
    for(auto i=a.begin();i<a.end();i++){
             cout<<*i<<" ";
    }
    cout<<endl;
    vector<int> :: iterator j;
    for(j=a.begin();j<a.end();j++){
        cout<<*j<<" ";
    }
     cout<<endl;
   
    for(int b:a){
        cout<<b<<" ";
    }
      // by taking reference variable
      cout<<endl;
   
    for(int &b:a){
        b++;
        cout<<b<<" ";
    }
    return 0;
}