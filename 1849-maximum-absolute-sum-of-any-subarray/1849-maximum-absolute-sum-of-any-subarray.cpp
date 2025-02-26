class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) 
    {
        int size=nums.size();
        int maxsum=0;
        int minsum=0;
        int maxi=0;
        int mini=0;
        for(int i=0;i<size;i++)
        {
           maxsum +=nums[i];
           minsum +=nums[i];
           if(maxsum<0)
           {
             maxsum=0;
           }
           maxi=max(maxi,maxsum);
           mini=min(mini,minsum);
           if(minsum>0)
           {
              minsum=0;
           }
        }
        return max(maxi,abs(mini));
    }
};