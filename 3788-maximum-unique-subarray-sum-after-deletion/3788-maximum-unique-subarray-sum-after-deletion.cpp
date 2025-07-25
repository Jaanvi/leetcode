class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        int size=nums.size();
        set<int>st;
        for(int i=0;i<size;i++)
        {
           st.insert(nums[i]); 
        }
        int sum=0;
        int maxi=INT_MIN;
        for(auto it=st.begin();it!=st.end();it++)
        {
            sum+=*it;
            maxi=max(maxi,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;

    }
};