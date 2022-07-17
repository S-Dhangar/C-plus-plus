 #include<bits/stdc++.h>
 #include<iostream>
 using namespace std;

 int find_max_sum(int arr[],int n){
     int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        
        
        
        return max;
        // Your code here
 }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=find_max_sum(arr,n);
    cout<<max;
    return 0;
}