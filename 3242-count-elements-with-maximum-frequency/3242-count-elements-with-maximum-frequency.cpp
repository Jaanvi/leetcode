class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
           maxi=max(it->second,maxi);
        }
        int count=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
           if(it->second==maxi)
           {
              count=count+maxi;
           }
        }
       return count;
    }
};