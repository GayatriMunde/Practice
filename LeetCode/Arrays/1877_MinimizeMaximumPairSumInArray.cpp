//Question:
//Given an array nums of even length n, pair up the 
//elements of nums into n / 2 pairs such that:
//Each element of nums is in exactly one pair, and
//The maximum pair sum is minimized.
//Return the minimized maximum pair sum after 
//optimally pairing up the elements.


//Testcases
//Input: nums = [3,5,2,3]
//Output: 7

//Input: nums = [3,5,4,2,4,6]
//Output: 8


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int maxSum = 0;
        int len = nums.size() - 1;
        for (int i = 0; i < nums.size() / 2; i++){
            int temp = nums[i] + nums[len-i];
            if (maxSum < temp)
                maxSum = temp;
        }
        
        return maxSum;
    }
};