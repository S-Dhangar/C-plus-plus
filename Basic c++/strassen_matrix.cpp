#include<iostream>
using namespace std;

int main(){
     int n,m,p1,p2,p3,p4,p5,p6,p7;
    cout<<"enter the values of rows and columns of matrixes"<<endl;
     cin>>n>>m;
     cout<<"enter the elements of the matrix A"<<endl;
    int A[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>A[i][j];
        }
    } 
    

     
     cout<<"enter the elements of the matrix B"<<endl;
    int B[n][m],C[n][m];
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>B[i][j];
        }
    }
    cout<<"A = ";
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=m;j++){
            cout<<A[i][j]<<" ";
        }
         cout<<endl;
         cout<<"    ";
    } 
    cout<<endl;
    cout<<"B = ";
 for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
        cout<<"    ";
 } 
  
p1=(A[1][1]+A[2][2])*(B[1][1]+B[2][2]);
p2=(A[2][1]+A[2][2])*B[1][1];
p3=A[1][1]*(B[1][2]-B[2][2]);
p4=A[2][2]*(B[2][1]-B[1][1]);
p5=(A[1][1]+A[1][2])*B[2][2];
p6=(A[2][1]-A[1][1])*(B[1][1]+B[1][2]);
p7=(A[1][2]-A[2][2])*(B[2][1]+B[2][2]);

C[1][1]=p1+p4-p5+p7;
C[1][2]=p3+p5;
C[2][1]=p2+p4;
C[2][2]=p1+p3-p2+p6;
cout<<endl;
cout<<"C = ";
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
    cout<<" "<<C[i][j];
    }
    cout<<endl;
    cout<<"    ";
}
    
    return 0;
}