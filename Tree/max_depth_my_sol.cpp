 int depth(Node *node,int c){
        if(node==NULL)
        return c;
        int d=depth(node->left,++c);
        c--;
        int e=depth(node->right,++c);
        return max(d,e);
    }