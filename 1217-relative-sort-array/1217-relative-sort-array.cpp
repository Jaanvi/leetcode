class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        int s1=arr1.size();
        int s2=arr2.size();
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<s1;i++)
        {
            m[arr1[i]]++;
        }
        for(int i=0;i<s2;i++)
        {
            if(m.find(arr2[i])!=m.end())
            {
                while(m[arr2[i]]>0)
                {
                    ans.push_back(arr2[i]);
                    m[arr2[i]]--;
                }
            }
            else
            {
               ans.push_back(arr2[i]); 
            }
            m.erase(arr2[i]);
        }
        for (auto it=m.begin();it!=m.end();it++) 
        {
            while (it->second > 0) 
            {
                ans.push_back(it->first);
                it->second--;
            }
        }
        return ans;
    }
};