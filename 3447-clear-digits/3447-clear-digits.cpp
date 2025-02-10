class Solution {
public:
    string clearDigits(string s) 
    {
       for(int i=0;i<s.length();i++)
       {
            if(isdigit(s[0]))
            {
                s.erase(0,1);
                
            }
            else if(i!=0 && isdigit(s[i]))
            {
                s.erase(i-1,2);
                i=i-2;
            }
       } 
       return s;
    }
};