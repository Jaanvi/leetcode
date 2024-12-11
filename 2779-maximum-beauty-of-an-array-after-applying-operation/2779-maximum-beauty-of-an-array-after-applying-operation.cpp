class Solution 
{
public:
    int maximumBeauty(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int maxi=0;
        int start=0;
        for(int end=0;end<size;end++)
        {
            int count=0;
            while(nums[end]>nums[start]+2*k)
            {
               start++;
            }
            maxi=max(maxi,end-start+1);
        }  
        return maxi;
    } 
};