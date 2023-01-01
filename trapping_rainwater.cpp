#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
        
        int n;
        cin>>n;
        
int arr[n],ans=0;
for(int i=0;i<n;i++){
        cin>>arr[i];
}
for(int i=1;i<n;i++){
        int mx1=*max_element(arr,arr+i);
        int mx2=*max_element(arr+i,arr+n);
        int mn=min(mx1,mx2);
        int a=mn-arr[i];
        if(a<0){
                a=0;
        }
        ans=ans+a;
}
cout<<ans;
return 0;
        
}