class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        map<int, int> count;
        
        for (int i = 0; i < size; i++){
            count[nums[i]]++;
        }
        
        for (auto itr: count){
            if (itr.second > size/2)
                return itr.first;
        }
        
        return -1;
    }
};