#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
};

void insert(){
    node *newnode=new node();
    node*root=new node();
  
    int val;
      cout<<"enter the value of the node"<<endl;
    cin>>val;
  
    newnode->data=val;
    newnode->left=newnode->right=NULL;
    if(root==NULL){
        root=newnode;
        
    }
    else if(newnode->data<=root->data){
           root->left=newnode;
    }
    else{
        root->right=newnode;
    }
}
int main(){
   int n,m;
   cout<<"enter the number of nodes you want to store in the tree";
   cin>>n;
  
    
   
   for(int i=0;i<n;i++){
       
       insert();
   }
   
    
    
    return 0;
}