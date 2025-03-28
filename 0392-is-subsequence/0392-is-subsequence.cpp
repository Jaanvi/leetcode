class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        int r=0;
        int l=0;
        while(r<t.length())
        {
            if(s[l]==t[r])
            {
                l++;
            }
            r++;
        }
        if(l!=s.length())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};