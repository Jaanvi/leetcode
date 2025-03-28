class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int count=0;
        int s=nums.size();
        sort(nums.begin(),nums.end());
        int st=0;
        int  e=s-1;
        while(st<e)
        {
          if(nums[st]+nums[e]==k)
          {
            count++;
            st++;
            e--;
          }
          else if(nums[st]+nums[e]>k)
          {
             e--;
          }
          else
          {
            st++;
          }
        }
        return count;
    }
};