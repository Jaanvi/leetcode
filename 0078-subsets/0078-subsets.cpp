class Solution {
public:
    void recincludeexclude(vector<vector<int>>&res,int n,vector<int>&curr,vector<int>&nums)
    {
        if(n==nums.size())
        {
           res.push_back(curr);
           return;
        }
        //reccursion call for including
        curr.push_back(nums[n]);
        recincludeexclude(res,n+1,curr,nums);
        curr.pop_back();//for backtracking

        recincludeexclude(res,n+1,curr,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
       vector<vector<int>>res;
       vector<int>curr;
       recincludeexclude(res,0,curr,nums);
       return res;
    }
};