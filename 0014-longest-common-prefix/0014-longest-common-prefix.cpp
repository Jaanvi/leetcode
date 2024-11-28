#include<string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string prefix=strs[0];
        int size=strs.size();
        for(int i=0;i<size;i++)
        {
            string curstr=strs[i];
            string temprefix="";
            for(int j=0;j<min(curstr.length(),prefix.length());j++)
            {
                if(prefix[j]==curstr[j])
                {
                    temprefix=temprefix+curstr[j];
                } 
                else
                {
                    break;
                }
            }  
            prefix=temprefix;
            if (prefix.empty()) break; // Exit early if no common prefix
        }
        return prefix;
    }
};