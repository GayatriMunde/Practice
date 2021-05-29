//Question: Given a balanced string s, 
//split it in the maximum amount of balanced strings.

//Testcases
//Input: s = "RLRRLLRLRL"
//Output: 4

//Input: s = "LLLLRRRR"
//Output: 1

class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0, countL = 0, count = 0;
        for(int i = 0; i < s.length(); i++){
            if (countR == countL != 0){
                countR = 0;
                countL = 0;
                count++;
            }
            if (s[i] == 'R')
                countR++;
            else
                countL++;
        }
        return count;
    }
};
