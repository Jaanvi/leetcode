#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int n = words.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            char start = words[i].front();
            char end = words[i].back();
            if (vowels.count(start) && vowels.count(end)) {
                prefix[i + 1] = prefix[i] + 1;
            } else {
                prefix[i + 1] = prefix[i];
            }
        }
        vector<int> result;
        for (const auto& query : queries) {
            int l = query[0];
            int r = query[1];
            result.push_back(prefix[r + 1] - prefix[l]);
        }

        return result;
    }
};
