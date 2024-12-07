class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) 
    {
        int left = 1; // Minimum possible penalty
        int right = *max_element(nums.begin(), nums.end()); // Maximum possible penalty

        // Binary search to minimize the penalty
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canAchievePenalty(nums, maxOperations, mid)) {
                right = mid; // Try for a smaller penalty
            } else {
                left = mid + 1; // Increase the penalty
            }
        }

        return left; // Minimum penalty achievable
    }

private:
    // Helper function to check if a penalty is achievable within maxOperations
    bool canAchievePenalty(const vector<int>& nums, int maxOperations, int penalty) {
        int operations = 0;
        for (int balls : nums) {
            if (balls > penalty) {
                operations += (balls - 1) / penalty; // Calculate required splits
                if (operations > maxOperations) return false;
            }
        }
        return operations <= maxOperations;
    }
};

