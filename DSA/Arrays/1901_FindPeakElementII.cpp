//Que:
//https://leetcode.com/problems/find-a-peak-element-ii/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() < 2)
            return 0;
        
        int start = 0, end = nums.size();
        while(start < end){
            int mid = (start + end) / 2;
            int next = mid >= nums.size() - 1 ? INT_MIN : nums[mid+1];
            if (nums[mid] < next){
                start = mid+1;
            }
            else
                end = mid;
        }
        
        return start;
    }
    
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> idx(2);
        
        for (int i = 0; i < mat.size(); i++){
            int col = findPeakElement(mat[i]);
            int prev = i <= 0 ? -1 : mat[i-1][col];
            int next = i >= mat.size() - 1 ? -1 : mat[i+1][col];
            if (mat[i][col] > prev && mat[i][col] > next)
                idx[0] = i, idx[1] = col;
        }
        
        return idx;
    }
};