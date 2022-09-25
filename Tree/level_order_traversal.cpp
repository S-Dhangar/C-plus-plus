#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  struct node{
      int data;
      node *left;
      node *right;
  };

int inorder(node *Node){
    if(Node==NULL){
        return 0;
    }
    inorder(Node->left);
    cout<<Node->data<<" ";
    inorder(Node->right);
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

bool check(node *temp){
    if(temp==NULL || (temp->left==NULL && temp->right==NULL)){
        return 1;
    }
    int leftsum=0,rightsum=0;
    if(temp->left!=NULL){
            leftsum=temp->left->data;
        }
        if(temp->right!=NULL){
            rightsum=temp->right->data;
        }
    if(temp->data==(leftsum+rightsum)){
         int l=check(temp->left);
         int r=check(temp->right);
         if(l && r){
             return 1;
         }
    }
    else
    return 0;
}

void levelorder(node *root){
    queue< node* > q;
    q.push(root);
    while(q.empty()!=1){
        node *temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
    }

}

  int main()
  {
      node *head=NULL;
      int n;
      cout<<"enter the number of nodes ";
      cin>>n;
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
      cout<<"Inorder traversal is ";
      inorder(head);
      // here we are checking that at each node the children sum is equal to thier
      // parent or not;
      cout<<endl;

      cout<<"Level Order traversal is ";
      levelorder(head);
      return 0;
  }