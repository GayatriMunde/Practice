//Question:
//https://leetcode.com/problems/binary-tree-pruning/

//Testcase:
//Input: [1,null,0,0,1]
//Output: [1,null,0,null,1]

//Input: [0,null,0,0,0]
//Output: []

//Input: [1,0,1,0,0,0,1]
//Output: [1,null,1,null,1]

//Approach: Recursive
//Check for root first
//Check for all zeroes in brances
//Check for end leaf to be zero

class Solution {
public:
    bool allZero(TreeNode *root){
        if (!root || root->val == 1)
            return false;
        if (!root->left && !root->right && root->val == 0)
            return true;
        return allZero(root->left) && allZero(root->right);
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        if (!root)
            return NULL;
        
        if (allZero(root))
            return NULL;
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if (!root->left && !root->right && root->val == 0)
            return NULL;
        
        return root;
    }
};

