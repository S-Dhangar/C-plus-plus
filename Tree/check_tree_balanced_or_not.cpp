 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;


struct node
{
    int data;
    node *left;
    node *right;
};
int depth(node *root){
        if(root==NULL){
            return 0;
        }
        else{
            return max(depth(root->left),depth(root->right))+1;
        }
    }
 bool check(node *root){
        if(root==NULL){
            return 1;
        }
        int hl=depth(root->left);
        int hr=depth(root->right);
        if(abs(hl-hr)>1){
            return 0;
        }
        else{
            return check(root->left) && check(root->right);
        }
        return 1;
    }
    
    bool isBalanced(node* root) {
        bool b=check(root);
        return b;
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

if(isBalanced(root)){
    cout<<"Tree is a balanced binary tree";
}
else{
    cout<<"Tree is not a balanced binary tree";
}


    return 0;
}