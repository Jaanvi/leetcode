class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int len1=s1.length();
        int len2=s2.length();
        if(len1!=len2)
        {
            return false;
        }
        int findex=-1;
        int sindex=-1;
        int count=0;
        for(int i=0;i<len1;i++)
        {  
           if(s1[i]==s2[i])
           {
              continue;
           }  
           else
           {
             count++;
             if(count==3)
             {
                return false;
             }
             else if(count==1)
             {
                findex=i;
             }
             else if(count==2)
             {
                sindex=i;
             }
           }
        }
        if(findex==-1 && sindex==-1)
        {
            return true;
        }
        if(findex==-1 || sindex==-1)
        {
            return false;
        }
        else if(s1[findex]==s2[sindex] && s2[findex]==s1[sindex])
        {
            return true;
        }
        else
        {
             return false;
        }
    }
};