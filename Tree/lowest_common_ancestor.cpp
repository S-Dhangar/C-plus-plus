#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};


node *lca(node *n,int n1,int n2){
   
    if(n->data==n1 || n->data==n2){
        return n;
    }
    if(n->data>n1 && n->data<n2){
        return n;
    }
    if(n->data>n2 && n->data<n1){
        return n;
    }
    if((n->data>n1 && n->data>n2)){
        return lca(n->left,n1,n2);
    }
    if((n->data<n1 && n->data<n2)){
        return lca(n->right,n1,n2);
    }
    
}


int inorder(node *n){
    if(n==NULL){

        return 0;
    }
   
    inorder(n->left);
     cout<<n->data<<" ";
    inorder(n->right);
}


int postorder(node *n){
    if(n==NULL){

        return 0;
    }
   
    postorder(n->left);
     
    postorder(n->right);
    cout<<n->data<<" ";
}

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
    vector<int> path1,path2;
    int num1,num2;
    cin>>num1>>num2;
    node *ans=lca(head,num1,num2);
  
   
    cout<<ans->data;

    return 0;
}