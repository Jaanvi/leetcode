class Solution {
public:
    bool check(vector<int>& arr) 
    {
        int  size=arr.size();
        int pivot=-1;
        int count=0;
        for(int i=0;i<size-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
               pivot=i+1;
               count++;
            }
        }
        if(count==0)
        {
            return true;
        }
        if(count==1 && arr[0]>=arr[size-1])
        {
            return true;
        }
        return false;
    }
};