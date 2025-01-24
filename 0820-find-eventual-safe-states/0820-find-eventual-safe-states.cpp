class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> revGraph(n);  
        vector<int> outdegree(n, 0);     
        queue<int> q;                     

        for (int i = 0; i < n; i++) {
            for (int neighbor : graph[i]) {
                revGraph[neighbor].push_back(i);
            }
            outdegree[i] = graph[i].size();
            if (outdegree[i] == 0) q.push(i); 
        }

        vector<int> safeNodes;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);

            for (int neighbor : revGraph[node]) {
                if (--outdegree[neighbor] == 0) q.push(neighbor);
            }
        }

        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
    }
};
