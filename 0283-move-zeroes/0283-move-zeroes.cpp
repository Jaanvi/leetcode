class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
       int size=nums.size();
       int left=0;
       int right=0;
       while(right<size)
       {
         if(nums[right]!=0)
         {
            swap(nums[left++],nums[right]);
            
         }
         right++;
       }
    }
};