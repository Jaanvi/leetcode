class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) 
    {
        int size=nums.size();
        int minsum=INT_MAX;
        bool found=false;
        for(int i=0;i<size;i++)
        {
            int sum=0;
           for(int j=i;j<size;j++)
           {
               sum=sum+nums[j];
              if(l<=(j-i+1) && (j-i+1)<=r)
              {
                  if(minsum>=sum && sum>0)
                  {
                     minsum=sum;
                     found=true; 
                  } 
              }    
           }
        }
        return found ? minsum : -1;
    }
};