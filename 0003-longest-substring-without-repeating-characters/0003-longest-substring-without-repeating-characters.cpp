class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int size=s.length();
        int left=0;
        int right=0;
        int maxi=0;
        map<char,int>m;
        while(right<size)
        {
           if(m.find(s[right])==m.end() || m[s[right]] < left)
           {
              m[s[right]]=right;
              maxi=max(maxi,right-left+1);
           }
           else
           {
              left=m[s[right]] + 1;
               m[s[right]] = right;
            //   m.clear();
           }
           right++;
        }
        return maxi;
    }
};