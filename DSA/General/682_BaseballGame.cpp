//Question:
//https://leetcode.com/problems/baseball-game/

//Approach:
//Use stack and follow instructions

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> score;
        for (int i = 0; i < ops.size(); i++){
            if (ops[i] == "+"){
                int val1 = score.top();
                score.pop();
                int val2 = score.top();
                score.push(val1);
                score.push(val1+val2);                
            }
            
            else if (ops[i] == "D")
                score.push(2 * score.top());
            
            else if (ops[i] == "C")
                score.pop();
            
            else{
                int val;
                stringstream(ops[i]) >> val;
                score.push(val);
            }            
        }
        
        int output = 0;
        while(score.size() > 0){
            output += score.top();
            score.pop();
        }
        
        return output;
    }
};