#include<string>
class Solution {
public:
    int myAtoi(string s) 
    {
        int len=s.length();
        int i=0;
        int sign=1;
        string ans="";
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
        while(i<len && s[i]>='0' && s[i]<='9')
        {
            ans+=s[i];
            i++;
        }
        if(ans.empty())
        {
            return 0;
        }
        try 
        {
            long long val = stoll(ans) * sign;
            if (val < INT_MIN) return INT_MIN;
            if (val > INT_MAX) return INT_MAX;
            return (int)val;
        } 
        catch (const std::out_of_range&) 
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
    }
};