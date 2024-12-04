class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        vector<int>prevrow={1};
        for(int i=0;i<numRows;i++)
        {
            vector<int>nextrow(i+1,1);
            for(int j=1;j<i;j++)
            {
              nextrow[j]=prevrow[j-1]+prevrow[j];
            }
            ans.push_back(nextrow);
            prevrow=nextrow;
        }    
        return ans;
    }
};