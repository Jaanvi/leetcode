class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = 0;
        int maxValPlusIndex = values[0]; 
        for (int j = 1; j < values.size(); ++j) {
            // Calculate the score for the current j
            maxScore = max(maxScore, maxValPlusIndex + values[j] - j);
            // Update maxValPlusIndex for the next iteration
            maxValPlusIndex = max(maxValPlusIndex, values[j] + j);
        }

        return maxScore;
    }
};
