class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
       int size=stones.size();
       priority_queue<int>maxheap;
       for(int i=0;i<size;i++)
       {
         maxheap.push(stones[i]);
       } 
       while(maxheap.size()>1)
       {
          int first=maxheap.top();
          maxheap.pop();
          int second=maxheap.top();
          maxheap.pop();
          int diff;
          if(first>=second)
          {
              diff=first-second;
          }
          else
          {
            diff=second-first;
          }
          maxheap.push(diff);
       }  
       int ans=maxheap.top();
       return ans;
    }
};