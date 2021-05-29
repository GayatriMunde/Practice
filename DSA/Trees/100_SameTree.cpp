//Question:
//Given the roots of two binary trees p and q, 
//write a function to check if they are the same or not.
//Two binary trees are considered the same if they are 
//structurally identical, and the nodes have the same value.

//Testcases:
//Input: p = [1,2,3], q = [1,2,3]
//Output: true

//Input: p = [1,2], q = [1,null,2]
//Output: false

//Input: p = [1,2,1], q = [1,1,2]
//Output: false

//Approach 1: Recursive

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p || !q)
            return p == q;
        
        return p->val == q->val
            && isSameTree(p->left, q->left)
            && isSameTree(p->right, q->right);
    }
};