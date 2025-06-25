class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int size=nums.size();
        vector<int>ans;
        int valid=size/3;
        map<int,int>m;
        for(int i=0;i<size;i++)
        {
          m[nums[i]]++;   
        }

        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>valid)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};