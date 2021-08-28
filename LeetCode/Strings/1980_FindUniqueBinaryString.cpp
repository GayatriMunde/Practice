class Solution {
public:
    string generateAll(int n, int idx, vector<string>& nums, string& str){
        if (idx == n)
            return str;
        
        str[idx] = '0';
        string val = generateAll(n, idx+1, nums, str);
        
        if (find(nums.begin(), nums.end(), val) == nums.end())
            return val;

        str[idx] = '1';
        string val2 = generateAll(n, idx+1, nums, str);
        
        if (find(nums.begin(), nums.end(), val2) == nums.end())
            return val2;
        
        return str;
    }
    
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string str;
        
        for (int i = 0; i < n; i++)
            str += " ";
        
        return generateAll(n, 0, nums, str);
    }
};