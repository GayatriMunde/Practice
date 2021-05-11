//Preorder Traversal

//Approach 1: Recursion
class Solution {
public:
    void helper(TreeNode* root, vector<int> &preorder){
        if (!root)      return;
        preorder.push_back(root->val);
        helper(root->left, preorder);
        helper(root->right, preorder);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        helper(root, preorder);
        return preorder;
    }
};

//Approach 2: Using stack
class Solution{
 public:
    vector<int> preorder(TreeNode *root){
        stack<struct TreeNode*> values;
        vector<int> preorder;

        if (!root)      
            return preorder;

        struct TreeNode *current = root;
        values.push(current);

        while(current && values.size() > 0){
            while (current->left){
                preorder.push_back(current->val);
                values.push(current);
                current = current->left;
            }
            preorder.push_back(current->val);

            if (current->right)
                current = current->right;

            else{
                struct TreeNode *temp = values.top();
                values.pop();
                while(!temp->right){
                    temp = values.top();
                    values.pop();
                }
                current = temp->right;
            }
        } 
        return preorder;
    }
};