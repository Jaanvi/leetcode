class Solution {
public:
    bool isArraySpecial(vector<int>& nums) 
    {
        int size=nums.size();
        for(int i=0;i<size-1;i++)
        {
           if(nums[i]%2==0 && nums[i+1]%2==0)
           {
              return false;
           }
           else if(nums[i]%2==1 && nums[i+1]%2==1)
           {
              return false;
           }

        }
        return true;
    }
};