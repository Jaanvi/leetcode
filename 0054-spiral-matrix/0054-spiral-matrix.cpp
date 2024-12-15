class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int rowsize=matrix.size();
        int columnsize=matrix[0].size();
        int totalelement=rowsize*columnsize;
        vector<int>ans;
        
        int startrow=0;
        int endrow=rowsize-1;
        int startcolumn=0;
        int endcolumn=columnsize-1;
        
        while(ans.size()<totalelement)
        {
           for(int i=startcolumn;i<=endcolumn  && ans.size() < totalelement;i++)
           {
               ans.push_back(matrix[startrow][i]);
           }
           startrow++;
           for(int i=startrow;i<=endrow  && ans.size() < totalelement;i++)
           {
               ans.push_back(matrix[i][endcolumn]);
           }
           endcolumn--;
           for(int i=endcolumn;i>=startcolumn  && ans.size() < totalelement;i--)
           {
               ans.push_back(matrix[endrow][i]);
           }
           endrow--; 
           for(int i=endrow;i>=startrow  && ans.size() < totalelement;i--)
           {
               ans.push_back(matrix[i][startcolumn]);
           }
           startcolumn++;  
        }
        return ans;
    }
};