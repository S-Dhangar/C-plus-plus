#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node *next = NULL;
};

int bst(node *Node, int a)
{

    if (a <= Node->data)
    {
        if (Node->left != NULL)
        {
            bst(Node->left, a);
        }
        else
        {
            Node->left = new node;
            Node->left->data = a;
            Node->left->left = NULL;
            Node->left->right = NULL;
        }
    }
    if (a > Node->data)
    {
        if (Node->right != NULL)
        {
            bst(Node->right, a);
        }
        else
        {
            Node->right = new node;
            Node->right->data = a;
            Node->right->left = NULL;
            Node->right->right = NULL;
        }
    }
}

void levelorder(node *root)
{
    queue<node *> q;

    q.push(root);
    while (q.empty() != 1)
    {
        int size = q.size();
        while (size--)
        {
            node *temp = q.front();

            q.pop();
            if(size!=0){
                temp->next=q.front();
            }
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}
int main()
{
    node *head = NULL;
    int n;
    cout << "enter the number of nodes in tree 1 ";
    cin >> n;
    cout << "enter node values ";
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            node *newnode = new node;
            newnode->left = NULL;
            newnode->right = NULL;
            cin >> newnode->data;
            head = newnode;
        }
        else
        {
            int a;
            cin >> a;
            bst(head, a);
        }
    }

    /*
    inorder(head);
    cout<<endl;
    inorder(head1);
    */
    levelorder(head);
    return 0;
}