class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int sr=grid.size();
        int sc=grid[0].size();
        map<int,int>m;
        for(int i=0;i<sr;i++)
        {
            for(int j=0;j<sc;j++)
            {
                m[grid[i][j]]++;
            }
        }
        int rep=-1,mis=-1;
        for(int i=0;i<=sr*sc;i++)
        {
            if(m[i]==2)
            {
               rep=i;
            }
            if(m[i]==0)
            {
               mis=i;
            }
        }
        return {rep,mis};
    }
};