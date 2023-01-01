#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
int inorder(node *temp, vector<int> &vec, int e)
{
    if (temp==NULL)
    {
        return 0;
    }
 
    vec.push_back(temp->data);
    inorder(temp->left, vec, e);
   
    inorder(temp->right, vec, e);
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
    vector<int> vec1, vec2;
    int c, d;
    cin >> c >> d;
   
   cout<<endl;
    inorder(root, vec1, c);
   
    inorder(root, vec2, d);
    cout<<vec1.size()<<" "<<vec2.size();
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }
    
    return 0;
}