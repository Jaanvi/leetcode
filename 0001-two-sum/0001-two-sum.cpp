class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   
        int size=nums.size();
        vector<int>ans;
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
               int sum=nums[i]+nums[j];
               if(target==sum)
               {
                   ans.push_back(i);
                   ans.push_back(j);
               }
            } 
        } 
        return ans;  
    }
};