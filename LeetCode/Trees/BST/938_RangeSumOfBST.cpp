//Question: 
//Given the root node of a binary search tree, 
//return the sum of values of all nodes with a value in the range [low, high].

//Tescases
//Input: root = [10,5,15,3,7,null,18], low = 7, high = 15
//Output: 32

//Input: root = [10,5,15,3,7,13,18,1,null,6], low = 6, high = 10
//Output: 23

//Approach:
//When there is tree use recursion bro ;)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int count = 0;
        if (!root)  return 0;
        if (root->val >= low && root->val <= high)
            count = root->val;
        return count 
                + rangeSumBST(root->left, low, high) 
                + rangeSumBST(root->right, low, high);
    }
};
