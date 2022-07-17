#include<iostream>
using namespace std;
struct node{
    int age;
    string name;
    struct node *next;

};
struct node*head;

struct node func(){
 struct node *one;
     one=(struct node *)malloc(sizeof(struct node));
     int a;
     string s;

     cin>>a>>s;
     one->age=a;
     one->name=s;
     head=
     return *one;
}

int main(){
    
    int n;
    cin>>n;

    
    for (int i = 0; i < n; i++)
    {
        fun();        /* code */
    }
    

     

}