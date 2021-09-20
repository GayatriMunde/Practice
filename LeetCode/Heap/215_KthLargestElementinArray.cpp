class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> prQueue;
        
        for (int i = 0; i < nums.size(); i++){
            prQueue.push(nums[i]);
            if (prQueue.size() > k)
                prQueue.pop();
        }
        
        return prQueue.top();
    }
};