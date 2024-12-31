class Solution 
{
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        int max_day = days.back(); 
        unordered_set<int> travel_days(days.begin(), days.end());
        
        vector<int> dp(max_day + 1, 0); 
        
        for (int i = 1; i <= max_day; ++i) 
        {
            if (travel_days.find(i) == travel_days.end()) 
            {
                dp[i] = dp[i - 1]; 
            } 
            else 
            {
                dp[i] = min({dp[i - 1] + costs[0], 
                dp[max(0, i - 7)] + costs[1], 
                dp[max(0, i - 30)] + costs[2]}); 
            }
        }
        
        return dp[max_day];
    }
};
