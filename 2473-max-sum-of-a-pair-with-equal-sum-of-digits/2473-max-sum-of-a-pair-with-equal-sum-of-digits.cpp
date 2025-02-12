
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> maxNum; // Stores the largest number for each digit sum
        int maxSum = -1;
        
        for (int num : nums) {
            int digitSum = sumOfDigits(num);
            
            // If a number with the same digit sum exists, compute maxSum
            if (maxNum.count(digitSum)) {
                maxSum = max(maxSum, maxNum[digitSum] + num);
                maxNum[digitSum] = max(maxNum[digitSum], num); // Keep the largest num
            } else {
                maxNum[digitSum] = num;
            }
        }
        return maxSum;
    }

private:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};
