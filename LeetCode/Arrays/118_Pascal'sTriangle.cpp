class Solution {
public:
    void getTriangle(vector<int> base, vector<vector<int>> &pascal, int numRows, int limit){
        if (pascal.size() == numRows)
            return;
        
        vector<int> current;
        for (int i = 0; i <= limit; i++){
            if (i == 0 || i == limit)
                current.push_back(1);
            else
                current.push_back((base[i-1]+base[i]));
        }
        pascal.push_back(current);
        getTriangle(current, pascal, numRows, limit+1);
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> base = {1};
        
        pascal.push_back(base);
        getTriangle(base, pascal, numRows, 1);
        return pascal;
    }
};