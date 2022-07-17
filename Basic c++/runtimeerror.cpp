#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int n,k;
	int t;
	cin>>t;

	while(t--){
	    	cin>>n>>k;
	    string str;
	    for(int i=0;i<n;i++){
	    cin>>str[i];
	    }
        int count=0,c=0;
	    int i;
	    for(i=0;i<n;i++){
	       
	      if(str[i]=='*'){
	          c++;
	          break;
	      }
}
	    for(i=0;i<n;i++){
	       
	      if(str[i]=='*' && str[i+1]=='*'){
	          count++;
	         
	      }
}

	    if(count+c>=k){
	        cout<<"YES"<<endl;
	        
	    }
	      
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	
	return 0;
}
