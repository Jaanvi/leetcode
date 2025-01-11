class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int size=nums.size();
        int pivot=-1;
        for(int i=size-2;i>=0;i--)
        {
           if(nums[i]<nums[i+1])
           {
              pivot=i;
              break;
           }
        }
        if(pivot==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }

        else
        {
            int maxval=nums[pivot+1];
            int maxvalindex=pivot+1;
            for(int j=pivot+1;j<size;j++)
            {
                if(nums[j]>nums[pivot] && nums[j]<maxval)
                {
                    maxvalindex=j;
                }
            }
            swap(nums[pivot],nums[maxvalindex]);

            sort(nums.begin()+pivot+1,nums.end());
        }
    }
};