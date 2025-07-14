class Solution {
public:
    double recursion(double x,double ans,long long n)
    {
         if(n==0)
         {
            return ans;
         }
         if(n%2==0)
         {
            return recursion(x*x,ans,n/2);
         }
         else
         {
            return recursion(x,ans*x,n-1);
         }

    }
    double myPow(double x, int n) 
    {
        long long N=n;
        double ans=1.0;
        if(n<0)
        {
            N=-N;
            x=1/x;
        }
        double res=recursion(x,ans,N);
        return res;
    }
};