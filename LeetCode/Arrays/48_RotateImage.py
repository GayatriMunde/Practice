# You are given an n x n 2D matrix representing an image, 
# rotate the image by 90 degrees (clockwise).
# You have to rotate the image in-place, 
# which means you have to modify the input 2D matrix directly. 
# DO NOT allocate another 2D matrix and do the rotation.


class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        dimension = len(matrix)
        
        for i in range(dimension):
            for j in range(i, dimension):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
                
        for i in range(dimension):
            k = dimension - 1
            for j in range(dimension // 2):
                matrix[i][j], matrix[i][k] = matrix[i][k], matrix[i][j]
                k -= 1