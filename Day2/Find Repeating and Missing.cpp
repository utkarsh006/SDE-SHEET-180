class Solution {
vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> ans; //{R,M}
        
        for(int i=0; i<n; i++)
        {
            int idx = abs(arr[i])-1;
            if(arr[idx]<0){
                ans.push_back(idx+1);
            }
            else{
                arr[idx] = -arr[idx];
            }
        }
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0){
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};