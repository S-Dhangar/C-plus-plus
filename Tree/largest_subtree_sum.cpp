 
 // To test these code first make a binary tree 
 
 int sum(Node *root,int &ms){
        if(root==NULL){
            return 0;
        }
       
        int lsum=sum(root->left,ms);
        int rsum=sum(root->right,ms);
       
        if(ms<(lsum + rsum+root->data)){
            ms=(lsum + rsum+root->data);
        }
        return lsum + rsum + root->data;
    }
    // 1 -2 3 -4 1 2 6
    
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        int max_sum=INT_MIN;
        sum(root,max_sum);
        return max_sum;
    }