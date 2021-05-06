//Postorder Traversal

//Approach 1: Recursion
class Solution {
public:
    void helper(TreeNode* root, vector<int> &postorder){
        if (!root)      return;
        helper(root->left, postorder);
        helper(root->right, postorder);
        postorder.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        helper(root, postorder);
        return postorder;
    }
};