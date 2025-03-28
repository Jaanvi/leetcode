#include<string>
class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int s1=word1.size();
        int s2=word2.size();
        string ans="";
         int i=0;
        while(i<s1 && i<s2)
        {
           ans.append(1,word1[i]);
           ans.append(1,word2[i]);
           i++;
        }
        while(i<s1)
        {
           ans.append(1,word1[i]);
           i++;
        }
        while(i<s2)
        {
           ans.append(1,word2[i]);
           i++;
        }
        return ans;
    }
};