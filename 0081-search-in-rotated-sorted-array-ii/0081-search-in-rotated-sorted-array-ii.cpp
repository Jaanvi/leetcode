class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int size=nums.size();
        int s=0;
        int e=size-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;

            if(nums[mid]==target)
            {
                return true;
            }
            if (nums[s] == nums[mid] && nums[e] == nums[mid]) {
                s++;
                e--;
                continue;
            }
            else if(nums[mid]>=nums[s])
            {
                if(target>=nums[s] && target<nums[mid])
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            else
            {
                if(target>nums[mid] && target<=nums[e])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }
        return false;
    }
};