class Solution {
    public int findNumbers(int[] nums) 
    {
       int size=nums.length;
       int count=0;
       for(int i=0;i<size;i++)
       {
        int len=0;
          while(nums[i]>0)
          {
            len++;
            nums[i]=nums[i]/10;
          }
          if(len%2==0)
          {
            count++;
          }
       }  
       return count;
    }
}