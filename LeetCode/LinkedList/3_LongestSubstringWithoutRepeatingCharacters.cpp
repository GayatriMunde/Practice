//Que: 
//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount = 0;

        for (int i = 0; i < s.length(); i++){
            int j = i, count = 0;
            vector<int> presence(256, 0);
            while(presence[s[j]] == 0 && j < s.length()){
                presence[s[j]]++;
                count++;
                j++;
            }
            maxCount = max(count, maxCount);
        }
        
        return maxCount;
    }
};