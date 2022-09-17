class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        int sum = 0;
        int ans = 0;

          unordered_map<int ,int> mp;

              for(int i = 0 ;i<n ; i++)
              {
                    sum+= arr[i];

                      if(sum == 0)  ans = i + 1;

                     else
                     {
                         if(mp.find(sum) != mp.end())
                           ans = max(ans , i-mp[sum]);

                         else  mp[sum] = i;

                     }
            }

      return ans;
    }
};
