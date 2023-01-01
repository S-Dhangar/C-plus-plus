#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  struct node{
      int data;
      node *left;
      node *right;
  };
int check(node *Node1,node *Node2){
   if(Node1==NULL && Node2==NULL){
       return 1;
   }
   if(Node1==NULL || Node2==NULL){
       return 0;
   }
   if(Node1->data!=Node2->data){
       return 0;
   }
   return check(Node1->left,Node2->left) && check(Node1->right,Node2->right);
} 

int c=0;
int inorder(node *Node,node *Node2){
    if(Node==NULL){
        return 0;
    }
    if(Node->data==Node2->data){
        c=check(Node,Node2);
        if(c==1)
        return c;
    }
    inorder(Node->left,Node2);
    
    inorder(Node->right,Node2);
} 
int bst(node *Node,int a){
    
     if(a<=Node->data){
         if(Node->left!=NULL){
             bst(Node->left,a);
         }
         else{
             Node->left=new node;
             Node->left->data=a;
             Node->left->left=NULL;
             Node->left->right=NULL;
            
         }
     }
     if(a>Node->data){
         if(Node->right!=NULL){
             bst(Node->right,a);
         }
         else{
             Node->right=new node;
             Node->right->data=a;
             Node->right->left=NULL;
             Node->right->right=NULL;
             
         }
     }
    
}


  int main()
  {
      node *head=NULL;
      int n;
      cout<<"enter the number of nodes in tree 1 ";
      cin>>n;
      cout<<"enter node values ";
      for (int i = 0; i < n; i++)
      {
        if(head==NULL){
            node *newnode=new node;
            newnode->left=NULL;
            newnode->right=NULL;
            cin>>newnode->data;
            head=newnode;
        }
        else{
            int a;
            cin>>a;
            bst(head,a);
        }
      }
  
      cout<<endl;

node *head1=NULL;
      
      cout<<"enter the number of nodes in tree 2 ";
      cin>>n;
      cout<<"enter node values ";

      for (int i = 0; i < n; i++)
      {
        if(head1==NULL){
            node *newnode=new node;
            newnode->left=NULL;
            newnode->right=NULL;
            cin>>newnode->data;
            head1=newnode;
        }
        else{
            int a;
            cin>>a;
            bst(head1,a);
        }
      }
  
/*
inorder(head);
cout<<endl;
inorder(head1);
*/

inorder(head,head1);
cout<<c;
      return 0;
  }