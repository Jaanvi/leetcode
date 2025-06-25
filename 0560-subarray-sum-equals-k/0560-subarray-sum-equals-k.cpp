class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int size=nums.size();
        map<int,int>m;
        int sum=0;
        int count=0;
        m[0]=1;//taki agr sum==k hai to hum kr sakte hai
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
            // if(sum==k)
            // {
            //     count++;
            // }
            int temp=sum-k;
            if(m.find(temp)!=m.end())
            {
                count=count+m[temp];
            }
            m[sum]++;
        }
        return count;
    }
};