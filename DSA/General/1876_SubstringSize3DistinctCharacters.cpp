//Question:
//A string is good if there are no repeated characters.
//Given a string s​​​​​, return the number of good substrings of length three in 

//Testcases
//Input: s = "xyzzaz"
//Output: 1

//Input: s = "aababcabc"
//Output: 4

class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.length() < 3)
            return 0;
        
        int count = 0;
        for (int i = 0; i < s.length() - 2; i++){
            if (s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] != s[i+2]){
                count++;
            }
        }
        
        return count;
    }
};