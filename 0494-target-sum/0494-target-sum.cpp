
class Solution {
public:
    int countWays(vector<int>& nums, int index, int target) {
        
        if (index == nums.size()) {
            return target == 0 ? 1 : 0;
        }

       
        int includePositive = countWays(nums, index + 1, target - nums[index]);
        int includeNegative = countWays(nums, index + 1, target + nums[index]);

        return includePositive + includeNegative;
    }

    int findTargetSumWays(vector<int>& nums, int target) 
    {
        return countWays(nums, 0, target);
    }
};
