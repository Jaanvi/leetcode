class Solution {
public:
    int recursion(string s,int i,int sign,long long ans)
    {
       if(i>=s.length() || !isdigit(s[i]))
       {
          return (int)(sign*ans);
       }

       ans=ans*10+(s[i]-'0');
       i++;
       if (sign == 1 && ans > INT_MAX) return INT_MAX;
       if (sign == -1 && -ans < INT_MIN) return INT_MIN;

       return recursion(s,i,sign,ans);
    }
    int myAtoi(string s) 
    {
        int len=s.length();
        int i=0;
        int sign=1;
        while(s[i]==' ')
        {
           i++;
        }
        if(s[i]=='-')
        {
            sign=-1;
        }
        if(s[i]=='+' || s[i]=='-')
        {
            i++;
        }
        long long ans=0;
        int rec=recursion(s,i,sign,ans);
        return rec;
    }
};