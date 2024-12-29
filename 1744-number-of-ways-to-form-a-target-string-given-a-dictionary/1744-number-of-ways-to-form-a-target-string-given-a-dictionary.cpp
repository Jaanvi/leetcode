
class Solution {
public:
    int numWays(vector<string>& words, string target) 
    {
        const int MOD = 1e9 + 7;
        int m = words[0].size(); 
        int n = target.size();   

        vector<vector<int>> freq(m, vector<int>(26, 0));
        for (string& word : words) 
        {
            for (int i = 0; i < m; i++)
            {
                freq[i][word[i] - 'a']++;
            }
        }

        vector<vector<long>> dp(m + 1, vector<long>(n + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= m; i++) 
        {
            for (int j = 0; j <= n; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j > 0) 
                {
                    char c = target[j - 1];
                    dp[i][j] += dp[i - 1][j - 1] * freq[i - 1][c - 'a'];
                    dp[i][j] %= MOD;
                }
            }
        }

        return dp[m][n];
    }
};
