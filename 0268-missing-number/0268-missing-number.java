import java.util.Arrays;

class Solution {
    public int missingNumber(int[] nums) 
    {
        int size=nums.length;
        Arrays.sort(nums);
        for(int i=0;i<size;i++)
        {
            if(i!=nums[i])
            {
                return i;
            }
        }
        return size;
    }
}