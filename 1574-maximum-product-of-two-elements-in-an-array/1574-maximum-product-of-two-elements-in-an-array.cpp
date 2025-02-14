class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int size=nums.size();
        priority_queue<int, vector<int>, greater<int>> minheap;
        for(int i=0;i<size;i++)
        {
           minheap.push(nums[i]);
           if(minheap.size()>2)
           {
             minheap.pop();
           }
        }
        int first=minheap.top();
        minheap.pop();
        int second=minheap.top();
        minheap.pop();
        int ans=(first-1)*(second-1);
        return ans;
    }
};