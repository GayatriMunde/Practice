//Question:
//https://leetcode.com/problems/jump-game/

//Approach:
//Using greedy Algorithm
//Start traversing from the end
//If num[index] + index is greater than target
//then index is new target
//If at the end target is 0 
//then yes it's possible

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size() - 1;
        int target = size;
        
        for (int i = size; i >= 0; i--){
            if (nums[i] + i >= target)
                target = i;
        }
        
        return target == 0;
    }
};