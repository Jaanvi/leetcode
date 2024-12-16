class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        int size=nums.size();
        for(int i=0;i<k;i++)
        {
            int minindex=0;
            for(int j=1;j<size;j++)
            {
                if(nums[j]<nums[minindex])
                {
                    minindex=j;
                }
            }
            nums[minindex]=nums[minindex]*multiplier;
        }  
        return nums;
    }
};