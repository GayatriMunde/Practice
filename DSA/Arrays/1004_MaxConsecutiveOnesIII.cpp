//Que:
//https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int maxCount = 0;
       stack<int> stk;
       int i = 0, j = 0;
       while(j < nums.size()){
           if(nums[j] == 1){
               maxCount = max(maxCount, j-i+1);
               j++;
           }
           else if(stk.size() < k && nums[j] == 0){
               stk.push(0);
               maxCount = max(maxCount, j-i+1);
               j++;
           }
           else if(!stk.empty()){
               stk.pop();
               while(nums[i] != 0)
                   i++;
               i++;
           }
           else{
               i++;
               j = i;
           }   
        } 
        return maxCount;
    }
};