class Solution {
public:
    vector<int>ans;
    int fib(int n) 
    {
        if(ans.empty())
        {
           ans.resize(n+1,-1);
        }
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        
        int sum= fib(n-1)+fib(n-2);
        if(ans[n]==-1)
        {
            ans[n]=sum;
            return ans[n];
        }
        return sum ;
    }
};