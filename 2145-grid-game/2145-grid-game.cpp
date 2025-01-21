class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) 
    {
        long long maxi = LLONG_MAX;
        int row = grid.size();
        int column = grid[0].size();

        // For upper prefix sum
        vector<long long> upper(column, 0);
        for (int i = column - 1; i >= 0; i--) {
            upper[i] = grid[0][i] + (i < column - 1 ? upper[i + 1] : 0);
        }

        // For lower prefix sum
        vector<long long> lower(column, 0);
        for (int i = 0; i < column; i++) {
            lower[i] = grid[1][i] + (i > 0 ? lower[i - 1] : 0);
        }

        for (int i = 0; i < column; i++) {
            long long tempmaxi = max(i > 0 ? lower[i - 1] : 0, i < column - 1 ? upper[i + 1] : 0);
            maxi = min(maxi, tempmaxi);
        }

        return maxi;
    }
};