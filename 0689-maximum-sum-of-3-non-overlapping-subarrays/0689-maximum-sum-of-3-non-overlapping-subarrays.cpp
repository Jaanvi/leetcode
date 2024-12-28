class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        for (int i = 0; i < n; i++) 
        {
            sum[i + 1] = sum[i] + nums[i];
        }

        vector<int> left(n, 0), right(n, n - k); 
        int maxSum = sum[k] - sum[0];
        for (int i = k; i < n; i++) 
        {
            if (sum[i + 1] - sum[i + 1 - k] > maxSum) 
            {
                maxSum = sum[i + 1] - sum[i + 1 - k];
                left[i] = i + 1 - k;
            } 
            else 
            {
                left[i] = left[i - 1];
            }
        }

        maxSum = sum[n] - sum[n - k];
        for (int i = n - k - 1; i >= 0; i--) 
        {
            if (sum[i + k] - sum[i] >= maxSum) 
            {
                maxSum = sum[i + k] - sum[i];
                right[i] = i;
            } 
            else 
            {
                right[i] = right[i + 1];
            }
        }
        vector<int> ans(3, 0);
        maxSum = 0;
        for (int i = k; i <= n - 2 * k; i++) {
            int l = left[i - 1], r = right[i + k];
            int total = (sum[i + k] - sum[i]) + (sum[l + k] - sum[l]) + (sum[r + k] - sum[r]);
            if (total > maxSum) {
                maxSum = total;
                ans = {l, i, r};
            }
        }

        return ans;
    }
};
