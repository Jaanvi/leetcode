class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int>prev={1};
        for(int i=1;i<=rowIndex;i++)
        {
            vector<int>ans(i+1,1);   
            for(int j=1;j<i;j++)
            {
               ans[j]=prev[j-1]+prev[j] ;
            }
            prev=ans;
        }  
        
        return prev;
    }
};