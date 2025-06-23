class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int size=nums.size();
        int ans=-1;
        sort(nums.begin(),nums.end());
        if(nums[0]!=0)
        {
            return 0;
        }
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
            return size;
    }
};