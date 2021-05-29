//Question:
//https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/

//Testcases
//Input: A = [4,2,3], K = 1
//Output: 5

//Input: A = [2,-3,-1,5,-4], K = 2
//Output: 13

//Approach 1:
//Check if all nums are +ve and K = 0
//then just decrease K by 2
//else change the sign of smallest element
//and decrement K

//Approach 2:
//Use priority queue
//Check Queue dir for that solution

class Solution {
public:
    int getSum(vector<int> nums){
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++){
            sum += nums[i];
        }
        return sum;
    }
    
    bool allPositive(vector<int> nums){
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] < 0)
                return false;
        }
        return true;
    }
    
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        while(k > 0){
            if (k % 2 == 0  && allPositive(nums))
                k -= 2;
            else{
                vector<int>::iterator it  = min_element(nums.begin(), nums.end());
                *it *= -1;
                k--;   
            }
        }
        
        return getSum(nums);
    }
};

