//Question:
//Given the root of a binary tree, 
//return the length of the diameter of the tree.
//The diameter of a binary tree is the length of the 
//longest path between any two nodes in a tree. 
//This path may or may not pass through the root.
//The length of a path between two nodes is represented 
//by the number of edges between them.

//Testcases:
//Input: root = [1,2,3,4,5]
//Output: 3

//Input: root = [1,2]
//Output: 1

//Approach 1: Recursive
//Using the height of left and right nodes


class Solution {
public:
    int getHeight(TreeNode* node){
        int lCount = 0, rCount = 0;
        if (!node)
            return 0;
        
        if (!node->left && !node->right)
            return 1;
        
        if (node->left)
            lCount = getHeight(node->left) + 1;
        
        if (node->right)
            rCount = getHeight(node->right) + 1;
        
        return max(lCount, rCount);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root || (!root->left && !root->right))
            return 0;
        
        return max(getHeight(root->left) + getHeight(root->right), 
                   max(diameterOfBinaryTree(root->left), 
                       diameterOfBinaryTree(root->right)
                      )
                  );
    }
};