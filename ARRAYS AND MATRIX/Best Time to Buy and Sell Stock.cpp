/*  prices = [7,1,5,3,6,4]

 7 1 5 3 6 4
 0 1 2 3 4 5
 
 If you're selling on idx 4 then you can buy uptill idx 3 and that too buy a stock having minimum price.
 
 Do (sell-buy) to gain max profit  */

class Solution {
public:
    
    int maxProfit(vector<int>& arr) 
    {
        // consider the first idx as minimum value
        int mini = arr[0];
        // initially assume profit to be 0
        int profit = 0;
        
        int n = arr.size();
        
            for(int i=1; i<n; i++)
            {
                //for each idx calculate profit
                int diff = arr[i]-mini;
                
                //checking max profit
                profit = max(profit,diff);
                
                //update minimum value for buying
                mini = min(mini,arr[i]);
            }
        
        return profit;
    }
};
