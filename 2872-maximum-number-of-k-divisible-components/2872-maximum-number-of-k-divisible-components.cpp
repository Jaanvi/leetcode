class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) 
    {
        vector<vector<int>> adj(n); 
        for (const auto& edge : edges) 
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int components = 0;

      
        function<long long(int, int)> dfs = [&](int node, int parent) {
            long long subtree_sum = values[node];

            for (int neighbor : adj[node]) {
                if (neighbor != parent) {
                    long long child_sum = dfs(neighbor, node); 
                    if (child_sum % k == 0) {
                        components++;
                    } else {
                        subtree_sum += child_sum; 
                    }
                }
            }

            return subtree_sum; 
        };

        long long total_sum = dfs(0, -1);

        if (total_sum % k == 0) {
            components++;
        }

        return components; 
    }
};
