class Solution {
public:
    vector<int>ans;
    int fib(int n) 
    {
        if(ans.empty())
        {
           ans.resize(n+1,-1);
        }
        if(n<2)
        {
            return n;
        }
        ans[n]= fib(n-1)+fib(n-2);
        if(ans[n]==-1)
        {
            return ans[n];
        }
        return ans[n];
    }
};