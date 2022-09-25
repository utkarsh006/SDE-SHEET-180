/* 1. Take out the sum of each element in array.
   2. Store the currsum in sum and take maxi as INT_MIN.
   3. If sum>maxi then set maxi=sum. 
   4. When you encounter negative element set sum=0.
   5. Return maxi.   */

long long maxSubarraySum(int arr[], int n)
    {
         int sum=0, maxi= INT_MIN;
        
          for(int i=0; i<n; i++)
          {
              sum += arr[i];
              
                if(sum>maxi) maxi = sum;
                if(sum<0) sum=0;
          }
          
          return maxi;
    }
