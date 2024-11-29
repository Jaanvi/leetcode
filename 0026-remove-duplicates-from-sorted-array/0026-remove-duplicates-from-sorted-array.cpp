class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int> m; // Map to store occurrences of each number
        int k = 0; // Count of unique elements
        
        for (int i = 0; i < nums.size(); i++) {
            // Check if the element is not already in the map
            if (m.find(nums[i]) == m.end()) {
                nums[k++] = nums[i]; // Place the unique element in the array
                m[nums[i]] = 1; // Mark it as seen in the map
            }
        }
        
        return k; // Return the count of unique elements
    }
};
