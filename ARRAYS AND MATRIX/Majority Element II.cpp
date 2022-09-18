class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> mp; //elemnt, freq
        vector<int> ans;
        int n = nums.size();
        
        //creating hashmap
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        
        for(auto x: mp) // accessing key value pairs 2->3, 3->1....
        {
            if(x.second > n/3)
                ans.push_back(x.first);
        }
        
        return ans;
        
    }
};
