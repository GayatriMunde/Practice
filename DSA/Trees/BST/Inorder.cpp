//Inorder Traversal

//Approach 1: Recursion
class Solution {
public:
    void helper(TreeNode* root, vector<int> &inorder){
        if (!root)      return;
        helper(root->left, inorder);
        inorder.push_back(root->val);
        helper(root->right, inorder);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        helper(root, inorder);
        return inorder;
    }
};

//Approach 2: Using stack
class Solution{
 public:
    vector<int> inorder(TreeNode *root){
        stack<struct TreeNode*> values;
        vector<int> inorder;

        if (!root)      
            return inorder;

        struct TreeNode *current = root;
        values.push(current);

        while(current && values.size() > 0){
            while (current->left){
                values.push(current);
                current = current->left;
            }

            struct TreeNode *temp = values.top();
            values.pop();
            inorder.push_back(current->val);

            if (values.size() != 0)
                inorder.push_back(temp->val);

            while(!temp->right){
                temp = values.top();
                values.pop();
                inorder.push_back(temp->val);
            }
            current = temp->right;
        }

        return inorder;
    }
};