class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int size=nums.size();
        priority_queue<int>maxheap;
        for(int i=0;i<size;i++)
        {
           maxheap.push(nums[i]);
        }
        int first=maxheap.top();
        maxheap.pop();
        int second=maxheap.top();
        maxheap.pop();
        int ans=(first-1)*(second-1);
        return ans;
    }
};