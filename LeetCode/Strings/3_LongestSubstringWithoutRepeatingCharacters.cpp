//Que: 
//https://leetcode.com/problems/longest-substring-without-repeating-characters/


//Approch 1: Brute force
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

//Approach 2: Sliding Window
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, ptr = 0;
        int count = 0;
        int hashmap[128] = {0};
        
        while(ptr < s.length()){
            start = max(hashmap[s[ptr]], start);
            count = max(count, ptr - start + 1);
            hashmap[s[ptr]] = ptr + 1;
            ptr++;
        }
        
        return count;
    }
};