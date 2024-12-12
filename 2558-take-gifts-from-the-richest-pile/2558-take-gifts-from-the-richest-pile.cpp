
class Solution 
{
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        long long sum=0; 
       for(int i=0;i<k;i++)
       {
           int maxindex=0;
           for(int j=0;j<gifts.size();j++)
           {
               if(gifts[j]>=gifts[maxindex])
               {
                   maxindex=j;
               }
           }
          // gifts[maxindex] = floor(sqrt(gifts[maxindex]));
           gifts[maxindex] = static_cast<int>(sqrt(gifts[maxindex]));
       }  
       for(int i=0;i<gifts.size();i++)
       {
           sum+=gifts[i];
       }
        return sum;
    }
};