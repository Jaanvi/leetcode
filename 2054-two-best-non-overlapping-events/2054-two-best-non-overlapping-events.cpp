class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        // Step 1: Sort events by their end times
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int n = events.size();
        vector<int> maxValues(n, 0);
        maxValues[0] = events[0][2];

        // Step 2: Compute max value up to each event
        for (int i = 1; i < n; ++i) {
            maxValues[i] = max(maxValues[i - 1], events[i][2]);
        }

        int result = 0;

        // Step 3: Calculate maximum sum of two non-overlapping events
        for (int i = 0; i < n; ++i) {
            // Binary search for the latest event that ends before the current event starts
            int low = 0, high = i - 1, best = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (events[mid][1] < events[i][0]) {
                    best = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            // Update the result
            int currentSum = events[i][2];
            if (best != -1) {
                currentSum += maxValues[best];
            }
            result = max(result, currentSum);
        }

        return result;
    }
};
