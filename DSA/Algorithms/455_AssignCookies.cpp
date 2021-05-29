//Question
//How many times s[j] >= g[i] is possible

//Testcase
//Input: g = [1,2,4], s = [1,2,3,5]
//Output: 3

class Solution{
public:
    //TC: O(nlogn)
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0, i = 0, j = 0;

        //sorting both lists
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        while(i < g.size() && j < s.size()){
            if (s[j] >= g[i]){
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};