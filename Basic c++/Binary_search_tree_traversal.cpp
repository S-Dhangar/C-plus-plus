#include<iostream>
using namespace std;
struct node{
      struct node *left;
      int data;
      struct node *right;
};
 

node *create(struct node *start,int a){
     struct node* newnode;
       newnode= (struct node*)malloc(sizeof(struct node));
       newnode->data=a;
       newnode->left=NULL;
       newnode->right=NULL;
       if(start==NULL){
       start=newnode;
       
       }
       else if(start->data>=newnode->data){
       start->left=create(start->left,a);
       }
       else if(start->data<newnode->data){
           start->right=create(start->right,a);
       }
          return start;
}
void inorder(struct node *head){
    if(head!=NULL){
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
    }
}
void preorder(struct node *head){
    if(head!=NULL){
   
    cout<<head->data<<" ";
     preorder(head->left);
    preorder(head->right);
    }
}
void postorder(struct node *head){
    if(head!=NULL){
       postorder(head->left);
   postorder(head->right); 
    cout<<head->data<<" ";      
    }
}

int main(){
    
   int n;
  
       int a;
      struct node *start=NULL;
      
   cout<<"enter the size of tree\n";
   cin>>n;
   
   cout<<"enter the elements the binary search tree"<<endl;
   cin>>a;
  start= create(start,a);
    for(int i=0;i<n-1;i++){
        
       cin>>a;
       
       create(start,a);
       
        
    }
    cout<<"inorder is = ";
   inorder(start);
   cout<<endl<<"preorder is= ";
   preorder(start);
   cout<<"postorder is =";
   postorder(start);
    return 0;
}