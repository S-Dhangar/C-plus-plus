#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool IsBST(node *root,int min,int max);
struct node
{
    int data;
    node *left;
    node *right;
};





void *insert(node *h)
{
     
   
        cin>>h->data;
        h->left=NULL;
        h->right=NULL;
       
   
   
}

int bst(node *tr,int val){

    
    if(val<=tr->data){
        if(tr->left!=NULL)
        bst(tr->left,val);
        else{
        tr->left=new node;
        tr->left->data=val;
        tr->left->left=NULL;
        tr->left->right=NULL;
        
        return 0;
        }
    }
    if(val>(tr->data)){
        if(tr->right!=NULL)
        bst(tr->right,val);
        else{
             tr->right=new node;
        tr->right->data=val;
        tr->right->left=NULL;
        tr->right->right=NULL;
        
        return 0;
        }
    }

}

node *newnode(){
    int a;
    cin>>a;
    node *nd=new node;
    nd->left=NULL;
    nd->right=NULL;
    nd->data=a;
    return nd;
    }

int main()
{
   

    cout<<"enter the number of nodes in your binary sezrch tree ";
    int n;
    cin>>n;
   node *head=NULL;
   head=new node;
    insert(head);
  /*  head->left=new node;
    head->left=newnode();
    head->right=new node;
    head->right=newnode();
    head->left->left=new node;
    head->left->left=newnode();
    head->left->right=new node;
    head->left->right=newnode();
    head->right->left=new node;
    head->right->left=newnode();
    head->right->right=new node;
    head->right->right=newnode();
  */ 
    node *root = head;
   
    int val;
    for(int i=0;i<n-1;i++){
       cin>>val;
       bst(head,val);
    }
    
        // Your code here
       cout<<IsBST(root,INT_MIN,INT_MAX);
    

    return 0;
}




bool IsBST(node *root,int min,int max){
         if(root==NULL)
        return true;
        
        if(root->data>min && root->data<max){
            bool left=IsBST(root->left,min,root->data);
            bool right=IsBST(root->right,root->data,max);
            if(left && right)
            return true;
        }
        return false;
    }
    