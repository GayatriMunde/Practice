class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = INT_MAX;
        int sum = 0, maxSum = INT_MIN;
        
        vector<int> dp(nums.size()+1);
        dp[0] = 0;
        
        for (int i = 0; i < nums.size(); i++){
            dp[i+1] = dp[i] + nums[i];
            if (dp[i+1] >= target){
                int j = i;
                while (j >= 0){
                    if (dp[i+1] - dp[j] >= target){
                        length = min(length, i-j+1);
                    }
                    j--;
                }
            }
        }
        
        return length != INT_MAX ? length : 0;
    }
};
