long long maxSubarraySum(int arr[], int n)
    {
         long long currsum = 0;
         long long maxSum = arr[0];
         
          for(int i = 0; i<n; i++)
          {
            currsum += arr[i];
            maxSum = max(maxSum, currsum);
            
            if(currsum<0) currsum = 0;
        }
        return maxSum;
    }
