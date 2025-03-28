class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int s=nums.size();
        int r=0;
        int l=0;
        double sum=0;
        double maxi=-1e9;
        while(r<s)
        {
           if(r<k)
           {
               sum+=nums[r]; 
               r++;
           }
           else 
           {
            sum+=nums[r]-nums[l];
             l++;
             r++;
           } 
           if(r-l==k)
           {
             if(sum>=maxi)
             {
                maxi=sum;
             }
           }
           
        }
        return double(maxi/k);
    }
};