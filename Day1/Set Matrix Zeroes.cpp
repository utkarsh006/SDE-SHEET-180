class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<pair<int,int>> v;
        int rows = matrix.size();
        int cols = matrix[0].size();

          for(int i=0; i<rows; i++)
          {
              for(int j=0; j<cols; j++)
              {
                  if(matrix[i][j]==0)
                     v.push_back(make_pair(i,j));    
              }
          }


          for(auto i:v) 
          {
              // setting rows to 0
          for(int j=0; j<cols; j++) matrix[i.first][j]=0;

        // setting cols to 0
          for(int j=0; j<rows; j++) matrix[j][i.second]=0;
          }
        
    }
};

    
