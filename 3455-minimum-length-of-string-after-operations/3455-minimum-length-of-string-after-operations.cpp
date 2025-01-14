class Solution {
public:
    int minimumLength(string s)
    {
        int size=s.length();
        map<char,int>m;
        for(int i=0;i<size;i++)
        {
            m[s[i]]++;
        }
        int count=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second<3)
            {
               count+=it->second;
            }
            else if((it->second)%2==0)
            {
                count+=2;
            }
            else if((it->second)%2!=0)
            {
                count+=1;
            }
        }
        return count;
    }
};