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

//Approach 2: Using one stack
class Solution{
 public:
    vector<int> postorder(TreeNode *root){
        stack<struct TreeNode*> values;
        vector<int> postorder;

        if (!root)      
            return postorder;

        struct TreeNode *current = root;
        values.push(current);
        int count = 0;
        while (count++ < 10 && current && values.size() > 0){  
            while (current->left){
                values.push(current);
                current = current->left;
            }

            if (!current->left && !current->right){
                postorder.push_back(current->val);
                struct TreeNode *temp = values.top();
                if (temp->right && temp->right == current){
                    postorder.push_back(temp->val);
                    values.pop();
                    if (temp == root->right){
                        postorder.push_back(root->val);
                        values.pop();
                        break;
                    }
                }
                current = values.top();
            }

            if (current->right){
                current = current->right;
            }

            else{
                struct TreeNode *temp = values.top();
                while (!temp->right){
                    postorder.push_back(temp->val);
                    values.pop();
                    temp = values.top();
                }
                current = temp->right;
            }
        }
        return postorder;
    }
};