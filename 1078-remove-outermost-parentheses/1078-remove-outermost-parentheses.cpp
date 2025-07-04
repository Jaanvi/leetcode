class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        int len=s.length();
        int depth=0;
        string ans;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(')
            {
                if(depth!=0)
                {
                    ans+='(';
                }
                depth++;
            }
            else
            {
                depth--;
                if(depth!=0)
                {
                    ans+=')';
                }
            }
        }
        return ans;
    }
};