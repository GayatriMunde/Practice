//https://leetcode.com/problems/toeplitz-matrix/
/*


Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true

*/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int istr=matrix.size()-1,jstr=0,iend=matrix.size()-1,jend=0,i,j;
        while(jstr!=matrix[0].size()-1 or iend!=0)
        {    i=istr;
            j=jstr;
            while(i!=iend and j!=jend)
             {  
                if(matrix[i][j]!=matrix[iend][jend])
                    return false;
                i++;
                j++;
             }
            if(istr>0)
                istr--;
            else
                jstr++;
            if(jend <matrix[0].size()-1)
                jend++;
            else
                iend--;
         cout<<istr<<" "<<jstr<<" "<<iend<<" "<<jend<<endl;
         
        }
        return true;
    }
};