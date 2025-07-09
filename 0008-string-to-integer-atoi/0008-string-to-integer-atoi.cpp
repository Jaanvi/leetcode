class Solution {
public:
    int myAtoi(string s) 
    { 
      int len=s.length();
        int i=0;
        int sign=1;
        while(i<len && s[i]==' ')
        {
            i++;
        }
        if(i<len && s[i]=='-')
        {
           sign=-1;
           i++;
        }
        else if(i<len && s[i]=='+')
        {
            sign=1;
            i++;
        }
        while(i<len && s[i]=='0')
        {
            i++;
        }
        long long num=0;
        while(i<len && s[i]>='0' && s[i]<='9')
        {
            num=num*10+(s[i]-'0');
            if(sign==1 && num>INT_MAX) 
            {
                return INT_MAX;
            }
            if(sign==-1 && num>INT_MAX) 
            {
                return INT_MIN;
            }
            i++;
        } 
        return (int)(num*sign); 
    }
};