#include <stdio.h>

int main(){
	int n,a[1000];
	long int mul=1;
    printf("enter the array");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d", &a[i]);  
	}            	
		for(int i=0;i<n;i++)
	{
	mul= mul*a[i]; 
	}      	// Reading input from STDIN
	printf("%ld", mul);   
	return 0;    // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
