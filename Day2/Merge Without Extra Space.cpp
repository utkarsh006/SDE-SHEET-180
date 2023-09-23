class Solution {
public:

/*  TIME COMPLEXITY : O(M*N)
    SPACE COMPLEXITY : O(1)

1. Initialise K as m+n-1. This much elements would answer array holds.
2. Put i and j both at end of two arrays.
3. if arr1[i]>arr2[j] place it at last idx of new array and i-- & k--
4. else j-- and k--
5. Fill that new array (in case either of the pointer gets out of bound) */
 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i=m-1, j=n-1, k=m+n-1;

           while(i>=0 && j>=0)
           {
               if(nums1[i]>nums2[j])
                  nums1[k--] = nums1[i--];
               else
                  nums1[k--] = nums2[j--];
           }


           while(i>=0)
             nums1[k--]=nums1[i--];

           while(j>=0)
             nums1[k--]=nums2[j--];
    }
};
