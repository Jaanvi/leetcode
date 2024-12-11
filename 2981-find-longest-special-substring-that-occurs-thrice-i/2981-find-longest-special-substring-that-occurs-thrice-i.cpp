class Solution {
public:
    int maximumLength(string s) 
    {
        map<string,int>m;
        int maxi=0;
        int size=s.length();
        for(int i=0;i<size;i++)
        {
            string temp="";
            for(int j=i;j<size;j++)
            {
                 if (s[j] == s[i]) { // Ensure the substring is special
                    temp += s[j];
                    m[temp]++;
                } else {
                    break; // Stop if the substring is no longer special
                }
            }  
        }
        for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second >=3)
            {
                maxi = max(maxi,(int)(it->first).length());
            }    
        } 
        return maxi > 0 ? maxi : -1;
    }
};