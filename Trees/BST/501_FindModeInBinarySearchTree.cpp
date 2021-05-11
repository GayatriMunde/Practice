//Question:
//Given the root of a binary search tree (BST) with duplicates, 
//return all the mode(s) (i.e., the most frequently occurred element) in it.

//Testcases:
//Input: root = [1,null,2,2]
//Output: [2]

//Input: root = [0]
//Output: [0]

//Approach 1:
//Get count of each node
//Get the maximum count
//Add it to a vector

class Solution {
public:
    bool getCount(TreeNode* root, map<int, int> &count){
        if (!root)  return false;
        count[root->val]++;
        return getCount(root->left, count) || getCount(root->right, count);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> modes;
        if (!root)  return modes;
        
        map<int, int> count;
        getCount(root, count);
        int maximum = INT_MIN;
        
        for (auto i = count.begin(); i != count.end(); i++){
            if (i->second > maximum)
                maximum = i->second;
        }
        
        for (auto i = count.begin(); i != count.end(); i++){
            if (i->second == maximum)
                modes.push_back(i->first);
        }

        return modes;
    }
};
