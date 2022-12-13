class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {   
        // FLOYD'S CYCLE DETECTION ALGO
        // put both pointers at starting
        int slow = nums[0], fast = nums[0];

        // move 2 steps
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);

         fast = nums[0]; //bring fast to its original position

           //move 1 step
           while(slow!=fast)
           {
               slow = nums[slow];
               fast = nums[fast];
           }

           return slow;
    }
};
