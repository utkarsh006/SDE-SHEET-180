class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector <vector<int>> ans;
        
         for(int i=0; i<numRows; i++)
         {
             // make a vector to store the values in row
             // first box and last box would be 1, so fill the vector with 1
             // size of vector? i is 0 and first row has 1 element
             // so size of vector will be i+1
             vector<int> v(i+1,1);
             
             for(int j=1; j<i; j++)
             {
                   // i=2 [1,1]
                  // i=3 [1,1,1]will u take?
                 // obviously j and j-1 idx
                // go to previous row i-1 which idx 
                //sum of above 2 boxes
                 
                  v[j]= ans[i-1][j] + ans[i-1][j-1];
                    
             }
             ans.push_back(v);
         }
        
        return ans;
    }
};