#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void create(node *&head)
{
    node *ptr;
    int val;
    cin >> val;
    node *newnode = new node(val);

    if (head == NULL)
        head = newnode;
    
    else{
        ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    }
}

void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void seperate(node *temp){
    node *ptr1,*ptr2;
    ptr1=temp;
    ptr2=temp;
    node *ptr3=temp->next;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
    }
   
    while(ptr2->next!=ptr3){
        ptr2->next=ptr1->next;
        ptr1=ptr1->next->next;
        ptr2=ptr2->next;
       
    }
 int j=1;
    while(j<=10){
        cout<<temp->data<<" ";
        temp=temp->next;
        j++;
    }

}


int main()
{

    node *head = NULL;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        create(head);
    }


    seperate(head);




   // display(head);
}