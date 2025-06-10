class Solution {
public:
    int countPrimes(int n) 
    {
        int count=0;
       vector<bool>ans(n,true);
       for(int i=0;i<n;i++)
       {
          if(i==0 || i==1)
          {
            ans[i]=false;
          }
          if(ans[i]==true)
          {
            count++;
            int j=1;
            while(i*j<n)
            {
                if(i*j<n)
                {
                  ans[i*j]=false;
                }
                j++;
            }
          }
       }
       return count;
    }
};