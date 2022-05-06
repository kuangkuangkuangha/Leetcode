/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func maxDepth(root *TreeNode) int {
    if root == NULL {
        return 0
    }


    m := maxDepth(root->Left)
    n := maxDepth(root->Right)

    if m>=n {
        return m+1;
    }else {
        return n+1;
    }
}