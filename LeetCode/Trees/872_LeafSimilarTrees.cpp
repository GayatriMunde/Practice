//Question: Consider all the leaves of a binary tree, 
//check whether they are leaf similar or not
//Two binary trees are considered leaf-similar 
//if their leaf value sequence is the same.

//Testcase:
//Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], 
//root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
//Output: true

//Input: root1 = [1], root2 = [2]
//Output: false

//Approach:
//Using recursion, get values of all leaves in seq
//Compare values of both trees


class Solution {
public:
    void getLeaves(TreeNode* root, vector<int>& leaves){
        if (!root)
            return;
        
        if (!root->left && !root->right)
            leaves.push_back(root->val);
        
        getLeaves(root->left, leaves);
        getLeaves(root->right, leaves);
        return;
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1;
        vector<int> leaves2;
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        
        if (leaves1.size() != leaves2.size())
            return false;
        
        for (int i = 0; i < leaves1.size(); i++){
            if (leaves1[i] != leaves2[i])
                return false;
        }
        
        return true;
    }
};