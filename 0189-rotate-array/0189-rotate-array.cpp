class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int size=nums.size();
        int rot=k%size;
        vector<int>ans;
        for(int i=0;i<rot;i++)
        {
            ans.push_back(nums[size-rot+i]);
        }
        for(int i=0;i<size-rot;i++)
        {
            ans.push_back(nums[i]);
        }
        nums=ans;
    }
};