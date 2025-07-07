class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // Count frequency
        for (char c : s) {
            freq[c]++;
        }

        // Use max-heap (minimize memory by not storing full strings)
        priority_queue<pair<int, char>> pq;
        for (auto& [c, f] : freq) {
            pq.push({f, c});
        }

        // Use stringstream instead of repeated string concatenation
        stringstream ss;
        while (!pq.empty()) {
            auto [f, c] = pq.top();
            pq.pop();
            ss << string(f, c);  // efficient append
        }

        return ss.str();
    }
};
