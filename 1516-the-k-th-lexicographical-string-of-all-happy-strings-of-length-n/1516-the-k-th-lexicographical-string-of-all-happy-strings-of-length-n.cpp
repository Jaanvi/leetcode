class Solution {
public:
    vector<string>ans;
    vector<char>v{'a','b','c'};
    string s="";
    vector<string> solve(int n)
    {
        if(s.length()==n)
        {
            ans.push_back(s);
        }
        else
        {
            for(int i=0;i<v.size();i++)
            {
               if(s.empty() || v[i]!=s.back())
               {
                 s=s+v[i];
                 solve(n);
                 s.pop_back();
               }
            }
        }
        return ans;
    }
    string getHappyString(int n, int k) 
    {
        vector<string>res;
        res=solve(n);
         if(k > res.size()) return "";
        string kthstring=res[k-1];
        return kthstring;
    }
};