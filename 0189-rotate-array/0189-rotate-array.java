class Solution {
    public void rotate(int[] nums, int k) 
    {
       int size=nums.length;
       int rot=k%size;
       int[] ans=new int[size];
       for(int i=0;i<rot;i++)
       {
          ans[i]=nums[size-rot+i];
       }
       for(int i=0;i<size-rot;i++)
       {
           ans[i+rot]=nums[i];
       }
       for(int i=0;i<size;i++)
       {
           nums[i]=ans[i];
       }
    }
}