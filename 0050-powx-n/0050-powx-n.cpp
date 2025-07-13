class Solution {
public:
    double recpow(double x,long long n,double ans)
    {
        if(n==0)
        {
            return ans;
        }
        if(n%2==0)
        {
            x=x*x;
            n=n/2;
            return recpow(x,n,ans);
        }
        else
        {
            ans=ans*x;
            n=n-1;
            return recpow(x,n,ans);
        }
    }
    double myPow(double x, int n) 
    {
        if(n==0)
        {
            return 1;
        }
        long long N=n;
        if (N < 0)
        {
            x = 1 / x;
            N = -N;
        }
        double ans=1.0;
        double res= recpow( x, N, ans);
        return res;
    }
};