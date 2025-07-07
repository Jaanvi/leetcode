class Solution {
public:
    string largestOddNumber(string num) 
    {
        int len=num.length();
        int s=0;
        for(int i=len-1;i>=0;i--)
        {
            if(((int)num[i])%2!=0)
            {
                s=i;
                break;
            }
        }
        if(s==0 && ((int)num[s]%2==0))
        {
            return "";
        }
        return num.substr(0,s+1);
    }
};