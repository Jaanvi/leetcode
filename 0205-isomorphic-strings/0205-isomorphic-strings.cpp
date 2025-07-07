class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2)
        {
            return false;
        }
        map<char,char>m1;
        map<char,char>m2;
        for(int i=0;i<l1;i++)
        {
           if(m1.find(s[i])==m1.end())
           {
              m1[s[i]]=t[i];
           }
           if(m2.find(t[i])==m2.end())
           {
              m2[t[i]]=s[i];
           }
           if(m1.find(s[i])!=m1.end())
           {
              if(m1[s[i]]!=t[i])
              {
                 return false;
              }
           }
           if(m2.find(t[i])!=m2.end())
           {
              if(m2[t[i]]!=s[i])
              {
                 return false;
              }
           }
        }
        return true;
    }
};