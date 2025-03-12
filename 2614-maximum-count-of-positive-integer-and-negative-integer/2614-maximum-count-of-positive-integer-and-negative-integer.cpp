class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int countp=0;
        int countn=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]>0)
            {
                countp++;
            }
            if(nums[i]<0)
            {
                countn++;
            }
        }
        return max(countp,countn);
    }
};