class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        int len=s.length();
        int i=0;
        stack<char>st;
        string ans="";
        while(i<len)
        {
            if(s[i]=='(')
            {
               if(!st.empty())
               {
                 ans=ans+'(';
               }
               st.push(s[i]);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                  ans+=')';
                }
            }
            i++;
        }
        return ans;
    }
};