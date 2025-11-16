class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int size=nums.size();
        int ans=0;
        vector<int>res;
        for(int i=0;i<size;i++)
        {
            if(nums[i]==val)
            {
                continue;
            }
            else
            {
                res.push_back(nums[i]);
                ans++;
            }
        }
        nums=res;
        return ans;
    }
};