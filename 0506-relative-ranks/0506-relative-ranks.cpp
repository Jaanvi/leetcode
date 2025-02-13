class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        int size=score.size();
        priority_queue<pair<int,int>>maxheap;
        for(int i=0;i<size;i++)
        {
           maxheap.push({score[i],i});
        }
        vector<string>medal={"Gold Medal","Silver Medal","Bronze Medal"};
        vector<string>res(size);
        int rank=1;
        while(!maxheap.empty())
        {
            int index=maxheap.top().second;
            maxheap.pop();
            if(rank<=3)
            {
                res[index]=medal[rank-1];
            }
            else
            {
                res[index]=to_string(rank);
            }
            rank++;
        }
        return res;
    }
};