//Question:
//https://leetcode.com/problems/plus-one/

//Approach 1:
//Traverse from end and check for 9

//Time Complexity: O(n)
//Space: O(1)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        
        if (digits[len - 1] < 9)
            digits[len-1]++;
        else{
            int index = len - 1;
            bool flag = false;
            while(digits[index] == 9){
                if (index == 0){
                    digits[index] = 0;
                    digits.insert(digits.begin(), 1);
                    flag = true;
                }
                else
                    digits[index--] = 0;                
            }
            if (!flag)     
                digits[index]++;
        }

        return digits;
    }
};


//Approach 2: Recursive

//Time Complexity: O(n)
//Space: O(1)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int last = digits[size - 1];
        
        if(digits.size() < 1){
            return digits;
        }
        else if (digits.size() == 1 && digits[0] == 9){
            digits.pop_back();
            digits.push_back(1);
            digits.push_back(0);
        }
        else if (last == 9){
            digits.pop_back();
            digits = plusOne(digits);
            digits.push_back(0);
        }
        else{
            digits[size - 1] += 1;
        }
        
        return digits;
    }
};