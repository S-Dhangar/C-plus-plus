#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
int inorder(node *n){
    if(n==NULL){

        return 0;
    }
   
    inorder(n->left);
     cout<<n->data<<" ";
    inorder(n->right);
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
int f=6;
node *makebin(int pre[],int in[],int low,int high){

    if(low>high){
        
        return NULL;
    }
    node *newnode=new node;
    newnode->data=pre[f];
    newnode->left=NULL;
    newnode->right=NULL;
    
    int ind=0;
    for(int i=low;i<=high;i++){
        if(newnode->data==in[i]){
            ind=i;
            break;
        }
    }
    f--;
    newnode->right=makebin(pre,in,ind+1,high);
    newnode->left=makebin(pre,in,low,ind-1);
    
    return newnode;
}
int main()
{
   

    cout<<"enter the number of nodes in your binary sezrch tree ";
    int n;
    cin>>n;
   node *head=NULL;
   head=new node;
    //insert(head);
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
  
    node *root = head;
   
    int val;
    for(int i=0;i<n-1;i++){
       cin>>val;
       bst(head,val);
    }
    
//cout<<"enter the number of elements in the tree ";
//cin>>n;  */
int pre[n];
cout<<"enter the preorder array ";
for (int i = 0; i < n; i++)
{
    cin>>pre[i];
}
int in[n];
cout<<"enter the inorder array ";
for (int i = 0; i < n; i++)
{
    cin>>in[i];
}

    head=makebin(pre,in,0,n-1);
    inorder(head);
    return 0;
}