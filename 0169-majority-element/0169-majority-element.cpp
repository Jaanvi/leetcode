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
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>size/2)
            {
                return it->first;
            }
        }
        return -1;
    }
};