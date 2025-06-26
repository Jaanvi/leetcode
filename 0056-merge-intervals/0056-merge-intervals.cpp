class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        int size=intervals.size();
        int left=0;
        int right=0;
        vector<vector<int>>ans;
        while(right<=size)
        {
            vector<int>res;
            res.push_back(intervals[left][0]);
            int temp=intervals[left][1];
           while(right<size && temp>=intervals[right][0])
           {
              temp=max(temp,intervals[right][1]);
              right++;
           }
            res.push_back(temp);
            ans.push_back(res);
             left=right;
             right=left+1;
        }
       return ans;
    }
};