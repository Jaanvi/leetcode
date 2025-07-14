class Solution {
public:
    const int mod=1e9+7; 
    long long mypow(long long num,long long n,long long ans)
    {
       if(n==0)
       {
         return ans;
       }
       if(n%2==0)
       {
         return mypow((num*num)%mod,n/2,ans);
       }
       else
       {
         return mypow(num,n-1,(ans*num)%mod);
       }
    }
    int countGoodNumbers(long long n) 
    {
        long long odd=n/2;
        long long even=(n+1)/2;
        long long ans=1;
        long long res=(mypow(5,even,ans)*mypow(4,odd,ans))%mod;
        return res;
    }
};