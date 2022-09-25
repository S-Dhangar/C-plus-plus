#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void push(vector<int> arr[],int a,int b){
    
    arr[a].push_back(b);
    arr[b].push_back(a);
    
}


void shortest(vector<int> vec[],int n){
    
    int arr[n],par[n];
    queue<int> q;
    int src,dest;
    
    cin>>src>>dest;
    q.push(src);
    par[src]=-1;
    arr[src]=1;
    while(q.empty()==0){
        int a=q.front();
      
             q.pop();
        for(auto i:vec[a]){
            if(arr[i]!=1){
                q.push(i);
                par[i]=a;
                arr[i]=1;
            }
        }
        
     
      
    }
   cout<<endl;
   for(int i=0;i<n;i++){
       cout<<par[i]<<" ";
   }
   string arr1[n]={"Indore","BK","Shujalpur","Devas","Dodi","Ashta","Kothri","Sehore","Bhopal","Ujjain"};
   cout<<endl;
   stack<int> qu;
    qu.push(dest);
     while(par[dest]!=src){
     
      dest=par[dest];
      qu.push(dest);
  }
  qu.push(src);

while(qu.empty()==0){
    cout<<arr1[qu.top()]<<" -> ";
    qu.pop();
}
 cout<<"Happy Journey";
}



int main() {
	// your code goes here
int n;
cin>>n;
vector<int> arr[n];
push(arr,0,1);
push(arr,0,3);
push(arr,1,2);
push(arr,1,5);

push(arr,2,7);
push(arr,7,6);
push(arr,6,5);
push(arr,5,3);
push(arr,5,4);
push(arr,4,3);
push(arr,0,9);
push(arr,7,8);
push(arr,8,9);
for(int i=0;i<n;i++){
    cout<<i<<" -> ";
    for(auto j:arr[i]){
        cout<<j<<" ";
    }
    cout<<endl;
}
cout<<endl;

shortest(arr,n);
	
	
	
	return 0;
}