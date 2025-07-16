class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int size=nums.size();
        map<int,int>m;
        int right=0;
        int sum=0;
        int count=0;
        while(right<size)
        {
           sum=sum+nums[right];
           if(sum==goal)
           {
            count++;
           }
           int temp=sum-goal;
           if(m.find(temp)!=m.end())
           {
             count=count+m[temp];
           }
           m[sum]++;
           right++;
        }
        return count;
    }
};