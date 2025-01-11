class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int size=nums.size();
        map<int,int>m;
        for(int i=0;i<size;i++)
        {
           m[nums[i]]++;
        }
        for(int i=0;i<size;i++)
        {
            if(i<m[0])
            {
                nums[i]=0;
            }
            else if(i>=m[0]  && i<m[1]+m[0])
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=2;
            }
        }
    }
};