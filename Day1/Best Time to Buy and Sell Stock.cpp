/*  prices = [7,1,5,3,6,4]

 7 1 5 3 6 4
 0 1 2 3 4 5
 
 If you're selling on idx 4 then you can buy uptill idx 3 and that too buy a stock having minimum price.
 
 Do (sell-buy) to gain max profit  */

class Solution {
public:

    int maxProfit(vector<int>& arr) 
    {
        int n=arr.size();
        int maxProfit=0, minPrice=INT_MAX;

           for(int i=0; i<n; i++)
           {
               // updating min value for buying
               minPrice = min(minPrice,arr[i]);

               //for each idx calculate profit
               int diff = arr[i]-minPrice;

               //check max profit
               maxProfit = max(maxProfit, diff);
           }

           return maxProfit;
    }
};
