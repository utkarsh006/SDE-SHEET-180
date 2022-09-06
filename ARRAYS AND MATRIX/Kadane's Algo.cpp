/* 1. Update currSum = max(arr[i],arr[i]+currSum)
   2. If currSum>maxSum update maxSum=currSum  */
   
class Solution {
public:
    int maxSubArray(vector<int>& arr) 
    {
       int n=arr.size();
       int currSum=0;
       int maxSum = INT_MIN;
    
        for(int i=0; i<n; i++)
        {
           //update local maximum value
           currSum = max(arr[i], arr[i]+currSum);
        
              if(currSum > maxSum)
                 maxSum = currSum;
        }
    
       return maxSum;
    }
};
