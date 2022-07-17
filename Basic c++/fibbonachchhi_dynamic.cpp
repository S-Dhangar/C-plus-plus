#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibbo(int array[],int num){
        if(num==0 || num==1){
                return array[num];
        }
        else{
                if(array[num]>0){
                        return array[num];
                }
                else{ 
                        array[num]=fibbo(array,num-1)+fibbo(array,num-2);
                        return array[num];
                }
        }
        
}
int main(){
      
        int num;
        cin>>num;
       int array[100]={0};
       
        array[1]=1;
       
                cout<<fibbo(array,14)<<" ";
       
        return 0;

}