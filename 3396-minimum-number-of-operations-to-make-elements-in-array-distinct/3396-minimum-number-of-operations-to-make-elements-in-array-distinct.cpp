class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int count = 0; 

        while (nums.size() > 0) 
        {
            bool foundDuplicate = false;

            for (int i = 0; i < nums.size(); i++) 
            {
                for (int j = i + 1; j < nums.size(); j++) 
                {
                    if (nums[i] == nums[j]) 
                    {
                        foundDuplicate = true;
                        break;
                    }
                }
                if (foundDuplicate) break;
            }

            if (!foundDuplicate) break;

            vector<int> temp;
            for (int i = 3; i < nums.size(); i++) 
            {
                temp.push_back(nums[i]);
            }
            nums = temp;
            count++; 
        }

        return count;
    }
};
