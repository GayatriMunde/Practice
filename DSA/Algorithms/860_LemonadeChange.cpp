//Question: https://leetcode.com/problems/lemonade-change/

//Testcases
//Input: [5,5,5,10,20]
//Output: true

//Input: [5,5,5,20,20,10,5,10,10,20]
//Output: false


//Approach:
//for 5, change = 0; for 10, change = 5; for 20, change = 15
//Store count of 5 and count 10
//Increment & decrement accordingly
 
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change5 = 0, change10 = 0;
        for (int i = 0; i < bills.size(); i++){
            if (bills[i] == 5)
                change5++;
            
            else if (bills[i] == 10){
                change10++;
                if (change5 == 0)   return false;
                change5--;
            }
            
            else{
                if (change5 == 0)   return false;
                if (change10 == 0){
                    if (change5 < 3)  return false;
                    else    change5 -= 3;
                }
                if (change10 > 0 && change5 > 0){
                    change5--;
                    change10--;
                }
            }
        }
        return true;
    }
};