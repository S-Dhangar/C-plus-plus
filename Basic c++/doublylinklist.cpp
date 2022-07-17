#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;

};
node *head;
void create(){
    node *newnode=new node();
    node *ptr=new node();
    int val;
    cout<<"enter the value of the node"<<endl;
    cin>>val;
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    if(head==NULL){
     head=newnode;
    }
   else{
    ptr=head;
    while(ptr->right!=NULL){
        ptr=ptr->right;
    }
       ptr->right=newnode;
       newnode->left=ptr;
   }
}
node *display( node *ptr){
   
    ptr=head;
    while(ptr->right!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->right;
    }
     cout<<ptr->data;
    return ptr;
    
}
void reverse( node *ptr){
       
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->left;
    }
}
void insert(){
    int n;
    cout<<"enter the position on which you want to insert the element ";
    cin>>n;
      node *newnode=new node();
    node *ptr=new node();
    int val;
    cout<<"enter the value of the node"<<endl;
    cin>>val;
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    ptr=head;
   if(n==1){
     newnode->right=head;
     head->right=ptr->right;
     ptr->left=head;
   }
   else{
    ptr=head;
    for(int i=1;i<n-1;i++){
       ptr=ptr->right;
    }
    node*n=new node();
    n=ptr->right;  
    newnode->right=n;
    n->left=newnode;
    newnode->left=ptr;
       ptr->right=newnode;

   }
}
int main(){
    int n;
    cout<<"enter the number of elements you want to insert"<<endl;
    cin>>n;
    while(n--){
    create();
    }
    node*cr=new node();
    node*ptr=new node();
    cout<<"press 1 to display link list ";
    int t;
    cin>>t;
    if(t==1){
      cr=display(ptr);

    }
    cout<<endl;
    cout<<"press 2 to display in reverse order ";
    cin>>t;
     if(t==2){
           reverse(cr);
    }
   cout<<endl;
   cout<<"enter 3 to insert a node ";
   cin>>t;
   if(t==3){
       insert();
       display(ptr);
   }
    return 0;
}