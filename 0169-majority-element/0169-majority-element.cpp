class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int size=nums.size();
        map<int,int>m;
        for(int i=0;i<size;i++)
        {
            m[nums[i]]++;
        }
        int ans;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>(size/2))
            {
                ans=it->first;
            }
        }
        return ans;
    }
};