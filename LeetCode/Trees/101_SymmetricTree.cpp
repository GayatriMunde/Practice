//Question:
//Given the root of a binary tree, 
//check whether it is a mirror of itself 
//(i.e., symmetric around its center).

//Tescases:
//Input: root = [1,2,2,3,4,4,3]
//Output: true

//Input: root = [1,2,2,null,3,null,3]
//Output: false

//Approach 1: Recursive

class Solution {
public:
    bool helper(TreeNode* lNode, TreeNode* rNode){
        if (!lNode || !rNode)
            return lNode == rNode;
        
        return (lNode->val == rNode->val) 
            && helper(lNode->left, rNode->right)
            && helper(rNode->left, lNode->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true;
        
        return helper(root->left, root->right);
    }
};