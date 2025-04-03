class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2)
    {
        int s1=nums1.size();
        int s2=nums2.size();
        set<int>sa;
        set<int>sb;
        for(int i=0;i<s1;i++)
        {
           sa.insert(nums1[i]);
        }
        for(int i=0;i<s2;i++)
        {
           sb.insert(nums2[i]);
        }
        vector<vector<int>>ans;
        vector<int>res1;
        for(auto it=sa.begin();it!=sa.end();it++)
        {
            if(sb.find(*it)==sb.end())
            {
                res1.push_back(*it);
            }
            else
            {
                sb.erase(*it);
            }
        }
        ans.push_back(res1);
        vector<int>res2(sb.begin(),sb.end());
        ans.push_back(res2);
        return ans;
    }
};