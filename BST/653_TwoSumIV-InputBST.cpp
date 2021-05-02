//Question:
//Given the root of a Binary Search Tree and a target number k, 
//return true if there exist two elements in the BST such that 
//their sum is equal to the given target.

//Testcases:
//Input: root = [5,3,6,2,4,null,7], k = 9
//Output: true

//Input: root = [5,3,6,2,4,null,7], k = 28
//Output: false

//Approach 1:
//Convert the BST into sorted list
//Use two pointer approach

class Solution {
public:
    void inorder(TreeNode* root, vector<int> &vals){
        if (!root)  return;
        inorder(root->left, vals);
        vals.push_back(root->val);
        inorder(root->right, vals);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> vals;
        inorder(root, vals);
        
        int low = 0, high = vals.size() - 1;
        while(low < high){
            if (vals[low] + vals[high] == k)
                return true;
            else if (vals[low] + vals[high] > k){
                high--;
            }
            else{
                low++;
            }
        }
        return false;
    }
};

//Approach 2:
//Use map to store values
//And recursive dfs

class Solution {
public:
    map<int, bool> vals;
    bool findTarget(TreeNode* root, int k) {
        if (!root)
            return false;
        
        if (vals[k - root->val])
            return true;
        
        vals[root->val] = true;
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};