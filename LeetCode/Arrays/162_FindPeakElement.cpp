//Que:
//https://leetcode.com/problems/find-peak-element/

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
};