//Question:
//https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/

//Testcases
//Input: nums = [1,5,2,4,1]
//Output: 14

//Input: nums = [1,1,1]
//Output: 3

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] <= nums[i - 1]){
                count += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return count;
    }
};