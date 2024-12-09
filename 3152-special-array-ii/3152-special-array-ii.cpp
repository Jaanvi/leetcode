// class Solution {
// public:
//     vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
//     {
//         int size=nums.size();
//         vector<bool>prifix(size,0);
        
//         for(int i=1;i<size;i++)
//         {
//             prifix[i]=prifix[i-1];
//             if(nums[i-1]%2==0 && nums[i]%2==1 || nums[i-1]%2==1 && nums[i]%2==0)
//             {
//                 prifix[i]++;
//             }
//         }
        
//         vector<bool>ans(queries.size(),true);
        
//         for(int j=0;j<queries.size();j++)
//         {
//             if(prifix[j][1]-prifix[j][0]==queries[j][1]-queries[j][0])
//             {
//                 ans.push_back(true);
//             }
//             else
//             {
//                 ans.push_back(false);
//             }
//         }    
         
//     }
// };

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size();
        vector<int> prefixSpecial(n, 0); // Prefix array to store "special" condition satisfaction

        // Preprocessing: Fill prefixSpecial
        for (int i = 1; i < n; i++) {
            prefixSpecial[i] = prefixSpecial[i - 1];
            if ((nums[i - 1] % 2 == 0 && nums[i] % 2 == 1) || 
                (nums[i - 1] % 2 == 1 && nums[i] % 2 == 0)) {
                prefixSpecial[i]++;
            }
        }

        vector<bool> ans;
        // Answer each query
        for (const auto& query : queries) {
            int start = query[0], end = query[1];
            if (prefixSpecial[end] - prefixSpecial[start] == end - start) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
