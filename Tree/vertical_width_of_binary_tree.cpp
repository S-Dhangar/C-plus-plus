#include <iostream>
#include <bits/stdc++.h>
using namespace std;
unordered_set<int> st;
struct node
{
    int data;
    node *left;
    node *right;
};
void bst(node *temp, int a)
{
    if (temp->data > a)
    {
        if (temp->left != NULL)
        {
            bst(temp->left, a);
        }
        else
        {
            temp->left = new node;
            temp->left->data = a;
            temp->left->left = NULL;
            temp->left->right = NULL;
        }
    }
    else
    {
        if (temp->right != NULL)
        {
            bst(temp->right, a);
        }

        else
        {
            temp->right = new node;
            temp->right->data = a;
            temp->right->left = NULL;
            temp->right->right = NULL;
        }
    }
}
int inorder(node *temp, int c)
{
    if (temp == NULL)
    {
        return 0;
    }

    inorder(temp->left, c-1);
    st.insert(c);
    inorder(temp->right, c+1);
    
}
int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            head = new node;
            cin >> head->data;
            head->left = NULL;
            head->right = NULL;
        }
        else
        {
            cin >> a;
            bst(head, a);
        }
    }
    node *root = head;

    cout << endl;
    int c = 0;
   
    inorder(root, c);
    
    cout << st.size() << endl;
    for (auto i = st.begin(); i != st.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}