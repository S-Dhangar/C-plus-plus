#include <iostream>
using namespace std;

int main() {
    int T,d,I,Q,P,D;
    int t;
    cin>>t;
    while(t!=0){
        
        
         cin>>D>>d>>P>>Q;
         T=d;   int a=P;  I=0; 
          
         for(int i=1;i<=D;i++){
        
        
       
         if(T==0){
             I=I+Q*d;
             T=d;
         }
        P=P+I;
         I=P;
         T--;
        }
         cout<<P<<endl;
        t--;
    }
	
	return 0;
}
