class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int size=nums.size();
        int s=0;
        int e=size-1;
        int mini=INT_MAX;
        while(s<=e)
        {
            if (nums[s] <= nums[e]) 
            {
                mini = min(mini, nums[s]);
                break;
            }
            int mid=s+(e-s)/2;

            if(nums[mid]<=mini)
            {
                mini=nums[mid];
            }
            if(nums[mid]>=nums[s])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return mini;
    }
};