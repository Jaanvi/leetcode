class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int size=words.size();
        int len=pref.length();
        int count=0;
        for(int i=0;i<size;i++)
        {
            string temp=words[i];
            int lenword=temp.length();
            if(lenword<len)
            {
                continue;
            }
            else
            {
                string str=temp.substr(0,len);
                if(str==pref)
                {
                    count++;
                }
            }
        }
        return count;
    }
};