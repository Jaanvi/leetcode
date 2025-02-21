
struct Compare {
    bool operator()(vector<int>& pair1,vector<int>& pair2) {
        int dist1 = pair1[0] * pair1[0] + pair1[1] * pair1[1];
        int dist2 = pair2[0] * pair2[0] + pair2[1] * pair2[1];
        return dist1 > dist2;
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq(points.begin(),points.end());

        vector<vector<int>> ans;
        int count=0;
        while(count<k)
        {
            ans.push_back(pq.top());
            pq.pop();
            count++;
        }

        return ans;
    }
};
