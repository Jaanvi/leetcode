class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int size=nums.size();
        int pos=-1;
        for(int i=size-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                pos=i-1;
                break;
            }
        }

        if(pos==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else
        {
        int maxi=INT_MAX;
        int index=0;
        for(int j=size-1;j>pos;j--)
        {
            if(nums[pos]<nums[j] && nums[j]<maxi)
            {
               index=j; 
               maxi=nums[j]; 
            }
        }
         swap(nums[pos],nums[index]);
         sort(nums.begin()+pos+1,nums.end());
        }
    
    }
};