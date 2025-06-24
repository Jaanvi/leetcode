class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int size=nums.size();
        vector<int>ans1;
        vector<int>ans2;
        for(int i=0;i<size;i++)
        {
             if(nums[i]>0)
             {
                ans1.push_back(nums[i]);
             }
             if(nums[i]<0)
             {
                ans2.push_back(nums[i]);
             }
        }
        for(int i=0;i<size;i=i+2)
        {
            nums[i]=ans1[i/2];
        }
        for(int i=1;i<size;i=i+2)
        {
            nums[i]=ans2[i/2];
        }
        return nums;
    }
};