#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
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
    }

}

void display(node *head){
     node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
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

    

}