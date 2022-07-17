#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }

};

node insertAtTail(node *&head){
     int val;
     cin>>val;
      node *newnode=new node(val);
      
     if(head==NULL){
         
        head=newnode;
        
     }
     else{
        node *temp;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        

    }
}

void display(node *head){
     node *temp=head;
     while(temp->next!=NULL){
      
        temp=temp->next;
     }

     while(temp!=NULL){
         
          cout<<temp->data<<" ";
          temp=temp->prev;
     }
}
int main(){
     int n;
     cin>>n;
     node *head;
     head=NULL;
   

     for (int i = 0; i < n; i++)
     {
        insertAtTail(head);
     }
     display(head);
     cin>>n;
     node *temp=head;
     int j=1;
     while(j!=n-1){
         temp=temp->next;
         j++;
     }
     int val;
     cin>>val;
     node *newnode=new node(val);
     newnode->next=temp->next;
     newnode->prev=temp;
     temp->next->prev=newnode;
     temp->next=newnode;
     display(head);
}