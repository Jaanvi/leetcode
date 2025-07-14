class Solution {
public:
    void recofparenthesis(int fix,int open,int close,int n,string str,vector<string>&ans)
    {
        if(open==fix && close==fix)
        {
            ans.push_back(str);
            return;
        }
        //base condition
           if(open<fix)
           {
              recofparenthesis(fix,open+1,close,n-1,str+'(',ans);
            //   recofparenthesis(fix,open,close+1,n-1,str+')',ans);
           }
           if(open>close)
           {
               recofparenthesis(fix,open,close+1,n-1,str+')',ans);
           }
        
        // recofparenthesis(fix,open,close+1,n-1,str+')',ans);
    }
    vector<string> generateParenthesis(int n) 
    {
       vector<string>ans;
       string str="(";
       recofparenthesis(n,1,0,n,str,ans);
       return ans;
    }
};