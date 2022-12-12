class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        // since this is n*n square matrix, find either rows or cols to iterate 
        int rows = matrix.size();
        
           // find transpose 
           for(int i=0; i<rows; i++)
           {
               for(int j=i+1; j<rows; j++)
                  swap(matrix[i][j],matrix[j][i]);
           }

           // reverse each row
           for(int i=0; i<rows; i++)
           {
               reverse(matrix[i].begin(),matrix[i].end());
           }
    }
};
