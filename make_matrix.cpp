#include<iostream>
using namespace std;
int main(){
    int a,b,row,col,n=1;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<b;i++){
        row=i;
        col=0;
       
        for(int j=0;j<=i;j++,row--){
            arr[row][j]=n++;

        }
    }

    for(int i=1;i<b;i++){
      row=b-1;
        for(int j=i;j<b;j++,row--){
            arr[row][j]=n++;

        }
    }
for(int i=0;i<b;i++){
    for(int j=0;j<b;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}