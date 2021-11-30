#include <stdio.h>


 // Definition for a binary tree node.
 struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};



int maxDepth(struct TreeNode* root){
    if(root == NULL)
        return 0;

    int m = maxDepth(root->left);
    int n = maxDepth(root->right);

    if(m >= n)
        return m+1;
    else 
        return n+1;
}