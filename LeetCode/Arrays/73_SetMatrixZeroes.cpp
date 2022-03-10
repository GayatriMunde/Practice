class Solution {
public:
    void setRowZeroes(vector<vector<int>>& matrix, int r){
        for (int i = 0; i < matrix[0].size(); i++){
            matrix[r][i] = 0;
        }
    }
    
    void setColZeroes(vector<vector<int>>& matrix, int c){
        for (int i = 0; i < matrix.size(); i++){
            matrix[i][c] = 0;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> positions;
        
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix[i].size(); j++){
                if (matrix[i][j] == 0){
                    positions.push_back(make_pair(i, j));
                }
            }
        }
        
        for (int i = 0; i < positions.size(); i++){
            setRowZeroes(matrix, positions[i].first);
            setColZeroes(matrix, positions[i].second);
        }
    }
};