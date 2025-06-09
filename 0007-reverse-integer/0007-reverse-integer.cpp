class Solution 
{
public:
    int reverse(int x) 
    {
        if(x==0)
        {
            return 0;
        }
       long long ans=1; 
       int count=0;
       int sign =1;
       long long temp=x;
       if(x<0)
       {
        sign=-1;
       }
       else
       {
        sign=1;
       }
       if(sign== -1)
       {
         temp=temp*-1;
       }
       while(temp>0)
       {
         int digit=temp%10;
         if(count==0)
         {
            ans=ans*digit;
         }
         else
         {
           if((ans>(-pow(2,31))) && ans<(pow(2,31)-1))
           {
            ans=ans*10+digit;
           }
         }
         count++;
         temp=temp/10;
       }
       ans=ans*sign;
       if((ans>(-pow(2,31))) && ans<(pow(2,31)-1))
       {
          return ans;
       }
       return 0;
    }
};