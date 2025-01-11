class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) 
    {
       int size=arr.size();
       int i=0;
       sort(arr.begin(),arr.end());
       vector<vector<int>>ans;
       while(i<size)
       {
          int start=arr[i][0];
          int end=arr[i][1];
          while(i+1<size && end>=arr[i+1][0])
          {
             end=max(end,arr[i+1][1]);
             i++;
          }
          ans.push_back({start,end}); 
          i++;
       }  
       return ans;
    }
};