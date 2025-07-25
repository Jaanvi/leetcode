class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
       int size=nums.size();
       int s=0;
       int e=size-1;
       while(s<=e)
       {
         int mid=s+(e-s)/2;
         if(nums[mid]==target)
         {
            return mid;
         }
         else if(nums[mid]<target)
         {
            s=mid+1;
         }
         else{
            e=mid-1;
         }
       }  
       return s; 
    }
};