class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int size=nums.size();
        int pivot=0;
        for(int i=size-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                pivot=i;
                break;
            }
        }
          
        if (pivot == 0) {
            reverse(nums.begin(), nums.end());
            return;
        }  

        int mini=INT_MAX;
        int minindex=pivot;
        for(int i=pivot;i<size;i++)
        {
           if(nums[i]>nums[pivot-1] && mini>=nums[i])
           {
                minindex=i;
                mini=nums[i];
           }
        }
        swap(nums[pivot-1],nums[minindex]);
        sort(nums.begin()+pivot,nums.end());
         
    }
};