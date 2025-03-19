class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int size=nums.size();
        int left=0;
        int count=0;
        while(left<=size-3)
        {
           if(nums[left]==0)
           {
            for(int i=left;i<=left+2;i++)
            {
                if(nums[i]==0)
                {
                    nums[i]=1;
                }
                else
                {
                    nums[i]=0;
                }
            }
            count++;
            left++;
           }
           else
           {
            left++;
           }
        }

        for(int i=0;i<size;i++)
        {
            if(nums[i]==0)
            {
                return -1;
            }
        }
        return count;
    }
};