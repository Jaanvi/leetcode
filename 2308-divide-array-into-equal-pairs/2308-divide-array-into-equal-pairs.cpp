class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {    
       int size=nums.size();
       map<int,int>m;
       for(int i=0;i<size;i++)
       {
           m[nums[i]]++;
       }
       for(auto it=m.begin();it!=m.end();it++)
       {
          if(it->second%2!=0)
          {
            return false ;
          }
       }
       return true;
    }
};