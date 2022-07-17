#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}; struct node*start=NULL;

void create(){
    struct node*newnode,*ptr;
    int val;
    newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("enter the value to create a newnode = ");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else
    {    ptr=start;
         while(ptr->next!=NULL){
             ptr=ptr->next;
         }
        ptr->next=newnode;
        newnode->next=NULL;
    }
    
}
void insert_begin(){
     struct node*newnode,*ptr;
    int val;
    newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("enter the value to create a newnode = ");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else
    {   
        newnode->next=start;
        start=newnode;
        
    }
    
}
void insert_position(){
    struct node*newnode,*nextnode,*ptr;
    int val,pos;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the position in which you want to insert the node = ");
    scanf("%d",&pos);
    printf("enter the value to create a newnode = ");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        
        ptr=start;
        

        for(int i=0;i<pos-2;i++){
           if(ptr==NULL){
               printf("position not found\n");
           }
           ptr=ptr->next;

        }
        newnode->next=ptr->next;
        ptr->next=newnode;
        
    }
}
void insert_end(){
    struct node*newnode,*ptr;
    int val;
    newnode=(struct node*)malloc(sizeof(struct node));
    
    printf("enter the value to create a newnode = ");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL){
           ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=NULL;
    }
}
void delete_begin(){
      struct node*ptr;
      ptr=start;
      start=ptr->next;
      free(ptr);

        
}
void delete_position(){
     struct node*ptr,*pnode;
      int pos;
     printf("enter the position on which you want to delete the node");
     scanf("%d",&pos);
     if(start==NULL){
         printf("\nlist is empty\n");
     }
     else{
     ptr=start;
     for(int i=0;i<pos-1;i++){
         pnode=ptr;
         ptr=ptr->next;
     }
      
     pnode->next=ptr->next; 
     printf("deleted element is %d ",ptr->data);
     free(ptr);
     }
}              
void delete_end(){
 struct node*ptr,*pnode;
       ptr=start;
       while(ptr->next!=NULL){
           
           pnode=ptr;
           ptr=ptr->next;

       }
       
       pnode->next=NULL;
        
        
}
void display(){
   struct node*ptr;
   if(start==NULL){
       printf("\nlist is empty\n");
   }
   else{
       ptr=start;
       while(ptr!=NULL){
        printf(" %d",ptr->data);
        ptr=ptr->next;
       }printf("\n");
   }
}

int main(){
    int choice;
    while(1){
        printf("choose any value from below\n");
        printf("press 1 for create a node\n");        
        printf("press 2 for insert a node at beginning\n");
        printf("press 3 to insert a node at any position\n");
        printf("press 4 for insert a node at end\n");
        printf("press 5 to delete a node from beginning\n");
        printf("press 6 to delete a node from any position\n");
        printf("press 7 to delete a node from end of list\n");
        printf("press 8 to display the linked list\n");
        printf("press 9 to exit code\n");
        printf("\n");
        printf("enter your choice = ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            create();
            break;
            case 2:
            insert_begin();
            break;
            case 3:
            insert_position();
            break;
            case 4:
            insert_end();
            break;
            case 5:
            delete_begin();
            break;
            case 6:
            delete_position();
            break;
            case 7:
            delete_end();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default :
            printf("you have entered wrong value\n");
        }
    }
    return 0;
}