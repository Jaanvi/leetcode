class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
       int size=nums.size();
       int s=0;
       int e=size-1;
       int mid=s+(e-s)/2;
       while(s<=e)
       {
          if(nums[mid]==target)
          {
            return mid;
          }
          else if(nums[mid]>=nums[s] )
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
            if(target > nums[mid] && target <= nums[e])
              {
                  s = mid + 1;
              }
              else
              {
                  e = mid - 1;
              }
          }
          mid=s+(e-s)/2;
       }
       return -1;
    }
};