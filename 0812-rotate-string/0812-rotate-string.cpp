class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        int l1=s.length();
        int l2=goal.length();
        if(l1!=l2)
        {
            return false;
        }
        for(int i=0;i<l1;i++)
        {
            if(s==goal)
            {      
                return true;
            }
            else
            {
               s=s.substr(1,l1-1)+s[0];
            }
        }
        return false;
    }
};