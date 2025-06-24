class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int size=nums.size();
        int l=0;
        int mid=0;
        int r=size-1;
        while(mid<=r)
        {
        if(nums[mid]==0)
        {
            swap(nums[mid],nums[l]);
            l++;
            mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
             swap(nums[mid],nums[r]);
             r--;
        }
        }
    }
};