/* STEPS :

1. Put low and mid at idx=0 and put high=n-1.
2. If my arr[mid]=0, then swap(arr[low],arr[mid] => low++, mid++
3. If arr[mid]=1, then mid++
4. If arr[mid]=2, then swap(arr[mid],arr[high])  => high--      */


class Solution {
public:
    void sortColors(vector<int>& arr) 
    {
        int n= arr.size();
        int low=0, mid=0, high=n-1;
        
           while(mid<=high)
           {
               if(arr[mid] == 0)
               {
                   swap(arr[low],arr[mid]);
                   low++;  mid++;
               }
               
               else if(arr[mid] == 2)
               {
                   swap(arr[mid],arr[high]);
                   high--;
               }
               
               else  mid++;
           }
    }
};
