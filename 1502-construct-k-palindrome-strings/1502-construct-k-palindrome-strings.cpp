class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
      
        if (k > n) return false;

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int oddCount = 0;
        for (auto it : freq) {
            if (it.second % 2 != 0) {
                oddCount++;
            }
        }
        return oddCount <= k;
    }
};

