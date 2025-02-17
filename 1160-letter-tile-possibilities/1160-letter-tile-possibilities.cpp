class Solution {
public:
    int countSequences(unordered_map<char, int>& freqMap) {
        int count = 0;
        for (auto& [ch, freq] : freqMap) {
            if (freq > 0) {
                count++; // Count current sequence
                freq--;  // Use this tile
                count += countSequences(freqMap); // Recursive call
                freq++;  // Backtrack (restore tile)
            }
        }
        return count;
    }

    int numTilePossibilities(string tiles) {
        unordered_map<char, int> freqMap;
        for (char ch : tiles) freqMap[ch]++; // Count frequencies
        return countSequences(freqMap);
    }
};
