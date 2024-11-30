class Solution {
public:
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int, vector<int>> graph; // adjacency list
        unordered_map<int, int> outDegree, inDegree; // to track degrees
        
        // Step 1: Build the graph and track in-degrees and out-degrees
        for (auto& pair : pairs) {
            graph[pair[0]].push_back(pair[1]);
            outDegree[pair[0]]++;
            inDegree[pair[1]]++;
        }
        
        // Step 2: Find the starting node
        int start = pairs[0][0]; // default to the first pair's start
        for (auto& [node, _] : graph) {
            if (outDegree[node] > inDegree[node]) {
                start = node;
                break;
            }
        }
        
        // Step 3: Hierholzer's Algorithm to find Eulerian Path
        vector<int> path;
        stack<int> stack;
        stack.push(start);
        
        while (!stack.empty()) {
            int node = stack.top();
            if (!graph[node].empty()) {
                int next = graph[node].back();
                graph[node].pop_back();
                stack.push(next);
            } else {
                path.push_back(node);
                stack.pop();
            }
        }
        
        // Step 4: Build the result from the path
        reverse(path.begin(), path.end());
        vector<vector<int>> result;
        for (int i = 0; i < path.size() - 1; ++i) {
            result.push_back({path[i], path[i + 1]});
        }
        
        return result;
    }
};








// class Solution {
// public:
//     vector<vector<int>> validArrangement(vector<vector<int>>& pairs) 
//     {
//        int size=pairs.size();
//         int index;//for correcting the first element
//        for(int k=0;k<size;k++)
//        {
//            for(int m=0;m<size;m++)
//            {
//                if(pairs[k][0]!=pairs[m][1] && pairs[k][1]==pairs[m][0] && m!=k)
//                {
//                   index=k; 
//                }
//            }    
//        } 
//         vector<int>temp=pairs[0];
//         pairs[0]=pairs[index];
//         pairs[index]=temp;
        
//        for(int i=0;i<size;i++)
//        {
//           for(int j=i+1;j<size;j++)
//           {
//               if(pairs[i][1]==pairs[j][0])
//               {
//                   vector<int>temp=pairs[i+1];
//                   pairs[i+1]=pairs[j];
//                   pairs[j]=temp;
//                   break;
//               } 
//               if(pairs[i][1]!=pairs[j][0] && j==(size-1))
//               {
//                   vector<int>temp=pairs[i];
//                   pairs[i]=pairs[j];
//                   pairs[j]=temp;  
//               }    
              
//           }    
//        } 
//         return pairs;
//     }
// };