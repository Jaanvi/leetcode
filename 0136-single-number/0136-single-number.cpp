class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-1;i=i+2)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
        return nums[size-1];
    }
};