class Solution {
public:
    int trap(vector<int>& height)
    {
        int l = 0, r = height.size() - 1;
        int water = 0, minHeight = 0;
        
        while (l < r) 
        {
            while (l < r && height[l] <= minHeight) 
            {
                water += minHeight - height[l];
                l++;
            }
            while (l < r && height[r] <= minHeight)
            {
                water += minHeight - height[r];
                r--;
            }
            
            minHeight = min(height[l], height[r]);
        }
        return water;
    }
};
