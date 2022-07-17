          //  1       print a to z alphabet letters
#include<stdio.h>
int main(){
    for(char i='a';i<='z';i++){
    printf("%c ",i);
    }
    return 0;
}

                //   2  decimal to binary
#include<stdio.h>
int main(){
    int n,a=1;
    long int b=0;
    
    printf("enter the value of n ");
    scanf("%d",&n);
    while(n>0){
        int r=n%2;
        n=n/2;
        b=b+r*a;
       a=a*10;
    }
 printf("%d",b);
    return 0;
}
                // decimal to octal

#include<stdio.h>
int main(){
    int n,a=1;
    long int b=0;
    
    printf("enter the value of n ");
    scanf("%d",&n);
    while(n>0){
        int r=n%8;
        n=n/8;
        b=b+r*a;
       a=a*10;
    }
 printf("%d",b);
    return 0;
}


//      armstrong number or not

#include<stdio.h>
int main(){
    int n,s=0,a=1;
    long int b=0;
    
    printf("enter the value of n ");
    scanf("%d",&n);
    int m=n;
    while(n>0){
        int r=n%10;
         s=s+r*r*r;
        n=n/10;
       
    }
    if(s==m)
 printf("armstrong number");
 else
 {
     printf("it is not armstrong number");
 }
 
    return 0;
}

//        Strong number or not



#include<stdio.h>

int main(){
    int n,a=1;
    static int s=0;
    printf("enter the value of n ");
    scanf("%d",&n);
    int m=n;
    while(n>0){
        int r=n%10;
     
        n=n/10;

             int f=1;
      while(r>1){
            f=f*r;
           r--;
       }
         
         s=s+f;
      
    }
    printf("%d\n",s);
    if(s==m)
 printf("strong number");
 else
 {
     printf("it is not strong number");
 }
 
    return 0;
}

                // 1 to n strong numbers

#include<stdio.h>

int main(){
    int n,a=1;
    static int s=0;
    printf("enter the value of n ");
    scanf("%d",&n);
    int m=n;
    while(n>0){
        int r=n%10;
     
        n=n/10;

             int f=1;
      while(r>1){
            f=f*r;
           r--;
       }
         
         s=s+f;
      
    }
    printf("%d\n",s);
    if(s==m)
 printf("%d",s);
 else
 {
     printf("it is not strong number");
 }
 
    return 0;
}
