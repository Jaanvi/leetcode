class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
       int size=nums.size();
       sort(nums.begin(),nums.end());
       int left=0;
       vector<vector<int>>ans;
       while(left<size-2)
       {
          if(left>0 && nums[left]==nums[left-1])
          {
            left++;
            continue;
          }
          int right=size-1;
          int mid=left+1;
          while(mid<right)
          {
            int sum=nums[left]+nums[right]+nums[mid];
            if(sum<0)
            {
                mid++;
            }
            else if(sum>0)
            {
                right--;
            }
            else
            {
              ans.push_back({nums[left],nums[mid],nums[right]});
              mid++;
              right--;
              while(mid<right && nums[right]==nums[right+1]){
                right--;
              }
              while(mid<right && nums[mid]==nums[mid-1]){
                mid++;
              }
            }
          }
          left++;
       }   
       return ans;
    }
};