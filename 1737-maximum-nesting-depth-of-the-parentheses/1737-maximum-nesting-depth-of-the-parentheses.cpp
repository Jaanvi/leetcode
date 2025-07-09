class Solution {
public:
    int maxDepth(string s) 
    {
        int len=s.length();
        stack<char>st;
        int count=0;
        int depth=0;
        for(int i=0;i<len;i++)
        {
           if(s[i]=='(')
           {
              st.push('(');
              count++;
           }
           if(s[i]==')')
           {
              if(!st.empty())
              {
                st.pop();
                count--;
              }
           }
           depth=max(depth,count);
        }
        return depth;
    }
};