#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next=NULL;
};
void insert(node * temp){
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node;
    cin>>temp->next->data;
    
}

void display(node *temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node *swap(node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        return head;
    }
    node *cur=head->next->next;
    node *prev=head;
    head=head->next;
    head->next=prev;
    while(cur!=NULL && cur->next!=NULL){
        prev->next=cur->next;
        node *temp=cur->next->next;
        cur->next->next=cur;
        cur->next=temp;
        prev=cur;
        cur=prev->next;
    }
    prev->next=cur;
    return head;
}
int main()
{
   int n;
   cin>>n;
   node *head=new node;
   cin>>head->data;
   for (int i = 0; i < n-1; i++)
   {
       insert(head);
   }
   display(head);
   head=swap(head);
   cout<<endl;
   display(head);
    return 0;
}