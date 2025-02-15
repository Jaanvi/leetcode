class Solution {
public:
    bool canPartition(string num, int index, int target) {
        if (index == num.length()) return (target == 0);
        
        int sum = 0;
        for (int i = index; i < num.length(); i++) {
            sum = sum * 10 + (num[i] - '0'); 
            if (sum > target) break; 
            if (canPartition(num, i + 1, target - sum)) return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        int totalSum = 0;
        for (int i = 1; i <= n; i++) {
            int square = i * i;
            string squareStr = to_string(square);
            if (canPartition(squareStr, 0, i)) {
                totalSum += square;
            }
        }
        return totalSum;
    }
};
