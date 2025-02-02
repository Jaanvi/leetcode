class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int size=nums.size();
         if (size == 1) 
         {
            return true;
         }
        int pivot=-1;
        for(int i=1;i<size;i++)
        {
            if(nums[i]<nums[i-1])
            {
                pivot=i;
                break;
            }
        }
        if(pivot==-1)
        {
            return true;
        }
        for(int i=0;i<pivot-1;i++)
        {
            if( nums[i]>nums[i+1])
            {
                return false;
            }
        }
        for(int i=pivot;i<size-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
        }
        if (nums[size - 1] > nums[0]) 
        {
            return false;
        }  
        return true;
    }
};