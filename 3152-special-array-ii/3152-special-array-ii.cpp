class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int size=nums.size();
        vector<int>prifix(size,0);
        
        for(int i=1;i<size;i++)
        {
            prifix[i]=prifix[i-1];
            if((nums[i-1]%2==0 && nums[i]%2==1) || (nums[i-1]%2==1 && nums[i]%2==0))
            {
                prifix[i]++;
            }
        }
        
        vector<bool>ans(queries.size(),true);
        
        for(int j=0;j<queries.size();j++)
        {
            int start=queries[j][0];
            int end=queries[j][1];
            if(prifix[end]-prifix[start]==end-start)
            {
                ans[j]=true;
                continue;
            }
            else
            {
                ans[j]=false;
            }
        }    
         return ans;
    }
};