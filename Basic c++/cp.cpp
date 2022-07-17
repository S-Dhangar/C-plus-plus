#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,q;
	cin>>n>>q;
	long long int a[n];
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	
	while(q){
	    int m,l,r,x,p;
	    cin>>m>>l>>r>>x;
	    
	    for(int i=l;i<=r;i++){
	        a[i]=a[i]+(x+i-l)*(x+i-l);
	    }
	    q--;
	    
	    cin>>m>>p;
	    cout<<a[p]<<endl;
	    
	    q--;
	  
	}
	return 0;
}
