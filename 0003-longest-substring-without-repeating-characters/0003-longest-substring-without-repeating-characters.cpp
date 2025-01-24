class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int size=s.size();
        map<char,int>m;//we will store char and index in the map
        int left=0;
        int maxi=0;
        for(int i=0;i<size;i++)
        {
            if(m.find(s[i])!=m.end())
            {
                left=max(left,m[s[i]]+1);
            }
            m[s[i]]=i;
            maxi=max(maxi,(i-left+1));
        }
       return maxi;
    }
};