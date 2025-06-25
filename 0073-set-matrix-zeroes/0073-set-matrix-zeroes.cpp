class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int sr = matrix.size();
        int sc = matrix[0].size();

        int matcol = matrix[0][0]; // Used for first column flag

        // Check if any element in the first row is 0
        for(int i = 0; i < sc; i++)
        {
            if(matrix[0][i] == 0)
            {
                matcol = 0; // mark first row to be zeroed
            }
        }

        // Check if any element in the first column is 0
        for(int i = 0; i < sr; i++)
        {
            if(matrix[i][0] == 0)
            {
                matrix[0][0] = 0; // mark first column to be zeroed
            }
        }

        // Mark rows and columns that need to be zeroed
        for(int i = 1; i < sr; i++)
        {
            for(int j = 1; j < sc; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // Set the appropriate elements to 0 based on markers
        for(int i = 1; i < sr; i++)
        {
            for(int j = 1; j < sc; j++)
            {
                if(matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero the first column if matrix[0][0] was marked
        for(int i = 0; i < sr; i++)
        {
            if(matrix[0][0] == 0)
            {
                matrix[i][0] = 0;
            }
        }

        // Zero the first row if matcol was marked
        for(int i = 0; i < sc; i++)
        {
            if(matcol == 0)
            {
                matrix[0][i] = 0;
            }
        }
    }
};
