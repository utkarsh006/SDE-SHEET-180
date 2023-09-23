class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
       unordered_map<int,int> mp; 
        int n = nums.size();
        
        //creating hashmap
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        
        for(auto x: mp) // accessing key value pairs 2->3, 3->1....
        {
            if(x.second > n/2)
                return x.first;
        }
        
        return -1;
    }
    
};

// OR 
// Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int counter = 0, majority;
        for (int it : nums) 
        {
            if (counter == 0) 
                majority = it;
            
            if(it == majority) 
               counter += 1;
            
            else counter += -1;
        }
        return majority;
    }
};
