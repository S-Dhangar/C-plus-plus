#include<iostream>
using namespace std;

class Armstrong{
    int x;
    public :
    Armstrong(int y){
        x=y;
    }
  void check();
};
void Armstrong:: check(){
     int rem,arm=0,c,d;
    c=x,d=x;
    while(c>0){
    rem=c%10;
    c=c/10;
    arm=arm+rem*rem*rem;
    
    }
    if(arm==d){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
}

    int main(){
        int n;
        cout<<"enter number to check that it is armstrong or not ";
        cin>>n;
        Armstrong num(n);
        num.check();
        return 0;
    }