class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int size=nums.size();
        int left=0;
        int mini=INT_MAX;
        int presum=0;
        for(int i=0;i<size;i++)
        {
            presum +=nums[i];
            while(presum>=target)
            {
                int len=i-left+1;
                mini=min(mini,len);
                presum-=nums[left];
                left++;
            }
        }
        if(mini!=INT_MAX)
        {
            return mini;
        }
        else
        {
            return 0;
        }
    }
};