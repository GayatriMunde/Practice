//Question:
//https://leetcode.com/problems/pascals-triangle/

//Approach:
//To obtain next row use the previous one

class Solution {
public:
    vector<int> helper(vector<int> &nums){
        vector<int> op;
        op.push_back(1);
        for (int i = 1; i < nums.size(); i++){
            op.push_back(nums[i] + nums[i-1]);
        }
        op.push_back(1);
        
        return op;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<int> row = {1};
        vector<vector<int>> output;
        
        output.push_back(row);
        for (int i = 1; i < numRows; i++){
            row = helper(row);
            output.push_back(row);
        }
        
        return output;
    }
};