class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
      int maxindex=-1; 
      int maxi=INT_MIN; 
      if(nums.size()<2)
      {
        return 0;
      }
      for(int i=0;i<nums.size()-1;i++)
      {
          if(nums[i]>nums[i+1])
          {
             if(nums[i]>maxi)
             {
                maxi=nums[i];
                maxindex=i;
             }
          }
          else
          {
            if(nums[i+1]>maxi)
             {
                maxi=nums[i+1];
                maxindex=i+1;
             }
          }
      }   
      return maxindex;
    }
};