#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};


int preorder(node *n){
    if(n==NULL){

        return 0;
    }
    cout<<n->data<<" ";
    preorder(n->left);
    preorder(n->right);
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

node *insert(node *h)
{
     
    if (h == NULL)
    {
        node *newnode=new node;
        int a;
        cin>>a;
        newnode->data=a;
        newnode->left=NULL;
        newnode->right = NULL;
        h=newnode;
       
        return h;
    }
   
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
int check=0;
int bst1(node *tr,int val){

    if(val==tr->data)
    return 1;
    else if(val<(tr->data)){
        if(tr->left!=NULL)
        bst1(tr->left,val);

    }
    else if(val>(tr->data)){
        if(tr->right!=NULL)
        bst1(tr->right,val);
       
    }
    else
    return 0;
   
  
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
    head=insert(head);
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

int num;
cin>>num;

check=bst1(head,num);
if(check==1){
    cout<<"present";
}
else if(check==0){
    cout<<"not present";
}
    return 0;
}