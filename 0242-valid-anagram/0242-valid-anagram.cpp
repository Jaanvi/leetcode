class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2)
        {
            return false;
        }
        map<char,int>m1;
        map<char,int>m2;
        for(int i=0;i<l1;i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<l1;i++)
        {
            m2[t[i]]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            if(m2.find(it->first)==m2.end() || m2[it->first]!=it->second)
            {
               return false;
            }
        }
        return true;
    }
};