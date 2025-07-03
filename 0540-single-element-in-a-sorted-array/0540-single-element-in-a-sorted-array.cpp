class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int size = nums.size();
        int s = 0;
        int e = size - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            // handle boundary cases
            if (mid == 0 || mid == size - 1) 
                return nums[mid];

            // if the current element is different from both neighbors
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }

            // if current is same as next
            if (nums[mid] == nums[mid + 1])
            {
                if ((size - mid) % 2 == 0)
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 2;
                }
            }

            // if current is same as previous
            else if (nums[mid] == nums[mid - 1])
            {
                if ((mid - s + 1) % 2 == 0)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 2;
                }
            }
        }
        return 0;
    }
};
