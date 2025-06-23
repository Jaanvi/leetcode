class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
       int size=nums.size();
       int count=0;
       int maxi=0;
       for(int i=0;i<size;i++)
       {
          if(nums[i]==1)
          {
            count++;
          }
          else
          {
            count=0;
          }
          maxi=max(maxi,count);
       } 
       return maxi;  
    }
};