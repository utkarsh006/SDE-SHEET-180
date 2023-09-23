class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        int currsum=0, maxsum=INT_MIN;

           for(int i=0; i<n; i++)
           {
               currsum = max(nums[i],nums[i]+currsum);
               if(currsum>maxsum)
                  maxsum=currsum;
           }

           return maxsum;
    }
};
