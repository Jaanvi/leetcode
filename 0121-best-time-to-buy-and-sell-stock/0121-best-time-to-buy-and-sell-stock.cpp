class Solution {
public:
    int maxProfit(vector<int>& pr) 
    {
       int size=pr.size();
       int min=pr[0];
       int profit=0;
       int maxi=0;
       for(int i=1;i<size;i++)
       {
          profit=pr[i]-min;
          if(profit>maxi)
          {
            maxi=profit;
          }
          if(min>pr[i])
          {
            min=pr[i];
          }
       }
        return maxi;
    }
};