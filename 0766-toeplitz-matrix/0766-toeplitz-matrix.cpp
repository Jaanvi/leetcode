class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        bool toeplitz=true;
        int row=matrix.size();
        for(int i=0;i<row;i++)
        {
            int column=matrix[i].size();
            for(int j=0;j<column;j++)
            {
                if(j-1>=0 && i>=1)
                {
                    if(matrix[i-1][j-1]==matrix[i][j])
                    {
                        toeplitz=true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }    
        }  
        return toeplitz;
    }
};