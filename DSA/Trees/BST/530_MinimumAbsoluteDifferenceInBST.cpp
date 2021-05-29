//Question:
//Given the root of a Binary Search Tree (BST), 
//return the minimum absolute difference between the values 
//of any two different nodes in the tree.

//Testcases
//Input: root = [4,2,6,1,3]
//Output: 1

//Input: root = [1,0,48,null,null,12,49]
//Output: 1

class Solution {
public:
    void inorderTraversal(TreeNode* root, vector<int> &vals){
        if (!root)  return;
        inorderTraversal(root->left, vals);
        vals.push_back(root->val);
        inorderTraversal(root->right, vals);
    }
    
    int getMinimumDifference(TreeNode* root) {
        vector<int> vals;
        inorderTraversal(root, vals);   
        
        int minimum = INT_MAX;
        for (int i = 0; i < vals.size() - 1; i++){
            minimum = min((vals[i+1] - vals[i]), minimum);
        }
        
        return minimum;
    }
};