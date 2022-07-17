#include<iostream>
using namespace std;

int main(){
     int n,m;
    cout<<"enter the values of rows and columns of matrixes"<<endl;
     cin>>n>>m;
     cout<<"enter the elements of the matrix A"<<endl;
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    } 
    

     
     cout<<"enter the elements of the matrix B"<<endl;
    int B[n][m],C[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
 for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
 } 
    
    return 0;
}