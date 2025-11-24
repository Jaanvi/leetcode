class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
         int row=matrix.size();
         int col=matrix[0].size();
         int matele=matrix[0][0];
         bool firstColZero = false;   // added to detect zero in first column

         for(int i=0;i<row;i++)
         {
            if(matrix[i][0] == 0)
            {
                firstColZero = true;
            }
            for(int j=1;j<col;j++)
            {
                 if(i==0)
                 {
                    if(matrix[i][j]==0)
                    {
                        matele=0;
                    }
                 }
                 else
                 {
                    if(matrix[i][j]==0)
                    {
                        matrix[0][j]=0;
                        matrix[i][0]=0;
                    }
                 }
            }
         }

         for(int i=1;i<row;i++)
         {
            for(int j=1;j<col;j++)
            {
                if(matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
         }
          //now for col
        if(firstColZero)
        {
            for(int i = 0; i < row; i++)
            {
                matrix[i][0] = 0;
            }
        }
         //now for row
         for(int i=0;i<col;i++)
         {
            if(matele==0)
            {
                matrix[0][i]=0;
            }
         }

    }
};