class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<>> pq;
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++)
        {
            int dis = pow(points[i][0], 2) + pow(points[i][1], 2);
            pq.push({dis,points[i]});
        }
        int count=1;
        while(count<=k)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            count++;
        }
        return ans;
    }
};