#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> vec;

int prime(int num){
    int a,b,i;
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;

        }
    }

    return 1;
}
int find_range(int m,int n){
    int count=0;
    for(int i=m;i<=n;i++){
        if(prime(i)==1){
           
            vec.push_back(i);
            count++;
        }
    }
    return count;
}
int main()
{
    int m,n;
    cin>>m>>n;
    int no_set=find_range(m,n);
    //cout<<no_set;
    cout<<endl;
    int i=0,j=1;
    int c=0;
   
   
    while(j<vec.size()){
        
        if((vec[j]-vec[i])<6){
            j++;
        }
        else if((vec[j]-vec[i])>6){
            i++;
        }
       else if((vec[j]-vec[i])==6){
            c++;
            i++;
            j++;

        } 
    }
    cout<<endl<<c;
    return 0;
}