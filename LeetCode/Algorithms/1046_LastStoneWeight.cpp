//Question:
//https://leetcode.com/problems/last-stone-weight/

//Testcase
//Input: [2,7,4,1,8,1]
//Output: 1

//Approach 1:
//Iterate until size of vector become 1
//intilaize iterator; In-loop:
//Sort the vector
//if weight of most 2 heaviest stones is equal
//then remove last eles and itr -= 2
//else remove most heaviest and replace other with diff
//decrement itr
//return 0 if vector is empty else the element within vector

//Approach 2:
//Use priority queue
//Check Queue dir for that solution

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int size = stones.size(), itr = size -1;
        
        while (stones.size() > 1){
            sort(stones.begin(), stones.end());

            if (stones[itr] == stones[itr-1]){
                stones.erase(stones.end() - 1);
                itr--;
            }
            else{
                stones[itr - 1] = stones[itr] - stones[itr - 1];
            }
            stones.erase(stones.end() - 1);
            itr --;
        }
        
        return stones.size() != 0 ? stones[0] : 0;
    }
};