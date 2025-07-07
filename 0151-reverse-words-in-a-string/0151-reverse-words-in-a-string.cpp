#include<string>
class Solution {
public:
    string reverseWords(string s) 
    {
        int len=s.length();
        int r=0;
        int l=0;
        string ans="";
        while(r<=len)
        {
           if(s[r]!=' ' && r<len)
           {
             r++;
           }
           else
           {
             if(l!=r)
             {
                string word = s.substr(l, r - l);
                    if (!ans.empty()) {
                        ans = word + " " + ans;
                    } else {
                        ans = word;
                    }
             }
             r++;
             l=r;
           }
        }
        return ans;
    }
};