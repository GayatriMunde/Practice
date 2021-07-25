//Question:
//https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

//Testcases
//Input: position = [1,2,3]
//Output: 1

//Input: position = [2,2,2,3,3]
//Output: 2

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0, even = 0;
        for (int i = 0; i < position.size(); i++){
            if (position[i] % 2)    
                odd++;
            else
                even++;
        }
        return min(odd, even);
    }
};