//Problem: 
//Given two strings s and t, check if s is a subsequence of t.

//Testcases
//Input: s = "abc", t = "ahbgdc"
//Output: true

//Input: s = "ach", t = "ahbgdc"
//Output: true

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t)
            return true;
        
        int j = 0, count = s.length();
        for(int i = 0; i < t.length(); i++){
            if (t[i] == s[j]){
                j++;
                count--;
            }
        }
        
        return (count == 0);
    }
};