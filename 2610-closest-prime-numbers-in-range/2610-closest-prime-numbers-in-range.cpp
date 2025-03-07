class Solution {
public:
    vector<int> closestPrimes(int left, int right) 
    { 
       vector<bool> prime(right + 1, true);
       prime[0] = prime[1] = false;
        for(int i=2;i*i<=right;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=right;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }


        pair<int,int>p={-1,-1};
        int diff=INT_MAX;
        pair<int,int>res={-1,-1};
        for(int i=left;i<=right;i++)
        {
           if( prime[i])
           {
              if(p.first!=-1 )
              {
                p.second=i;
                if(( p.second -  p.first)<diff)
                {
                   res.first=p.first;
                   res.second=p.second;
                   diff = p.second - p.first;
                }
                   p.first = p.second;
                   p.second=-1;
              }
            else
            {
              p.first = i;
            }
           }
        }
        if(res.first==-1  ||  res.second==-1)
        {
            return {-1,-1};
        }
        return {res.first,res.second};
    }
};