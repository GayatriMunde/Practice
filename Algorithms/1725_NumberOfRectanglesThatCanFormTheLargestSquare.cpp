//Question: 
//https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int, int> count;
        for(int i = 0; i < rectangles.size(); i++){
            vector<int> dim = rectangles[i];
            count[min(dim[0], dim[1])]++;
        }
        return max_element(count.begin(), count.end())->second;
    }
};