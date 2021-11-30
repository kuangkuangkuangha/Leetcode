#include <iostream>
using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


// 双重递归
class Solution 
{
public:

    bool judge(TreeNode* root, TreeNode* subRoot)
    {
        bool a, b;
        if(root == nullptr && subRoot == nullptr)  // 加了subRoot == nullptr
            return true;
        
        if(root!=nullptr && subRoot!=nullptr && root->val == subRoot->val)
        {
            a = judge(root->left, subRoot->left);
            b = judge(root->right, subRoot->right);
        }
        else
        {
            return false;
        }

        if(a==false || b==false)
            return false;
            
        return true;
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        bool m, n;
        if(root == nullptr)
            return false;
        
        if(judge(root, subRoot) == false)
        {
            m = isSubtree(root->left, subRoot);
            n = isSubtree(root->right, subRoot);
        }

        if(m==true || n==true)
            return true;

        return false;
    }
};