#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    int data;
    public:
    node *left;
    node *right;
    void insert(int a){
        this->left=NULL;
        data=a;
        this->right=NULL;
    }
    void show(){
        cout<<data;
    }
};

int main()
{
    int n;
    cin>>n;
    node *head=new node;
    head->insert(5);
    head->left=new node;
   head->left->insert(6);
   head->left->show();
    return 0;
}