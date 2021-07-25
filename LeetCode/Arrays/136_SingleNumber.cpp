#include <vector>
//Question:
//Given a non-empty array of integers nums, 
//every element appears twice except for one.
//Find that single one.

//Testcases:
//Input: nums = [2,2,1]
//Output: 1

//Input: nums = [4,1,2,2,1]
//Output: 4

//Approach:
//xor each element

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xOR = nums[0];
        for (int i = 1; i < nums.size(); i++){
            xOR ^= nums[i];
        }
        
        return xOR;
    }
};

//Time Complexity : O(n)
//Space Complexity: O(1)