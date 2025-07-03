class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int size=nums.size();
        int s=0;
        int e=size-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
             if (mid == 0 || mid == size - 1) 
                return nums[mid];

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            if(nums[mid]==nums[mid+1])
            {
                if((size-mid)%2==0)
                {
                   e=mid-1;
                }
                else
                {
                    s=mid+2;
                }
            }
            if(nums[mid]==nums[mid-1])
            {
                if((mid-s+1)%2==0)
                {
                   s=mid+1;
                }
                else
                {
                    e=mid-2;
                }
            }
        }
        return 0;
    }
};