// You are given an n x n 2D matrix representing an image, 
// rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, 
// which means you have to modify the input 2D matrix directly. 
// DO NOT allocate another 2D matrix and do the rotation.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copy;
        for (int i = 0; i < matrix.size(); i++){
            vector<int> row;
            for (int j = 0; j < matrix.size(); j++){
                row.push_back(matrix[i][j]);
            }
            copy.push_back(row);
        }
        
        int val, m = 0, n = matrix.size() - 1;
        for (int i = 0; i < matrix.size(); i++){
            for (int j = 0; j < matrix.size(); j++){
                val = copy[i][j];
                matrix[i][j] = copy[n--][m];
                if (n < 0)
                    n = matrix.size() - 1;
            }
            m++;
            if (m >= matrix.size())
                m = 0;
        }   
    }
};