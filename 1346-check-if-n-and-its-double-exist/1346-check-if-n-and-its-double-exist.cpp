class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        bool ans=false;
        int size=arr.size();
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(i!=j && arr[i]==2*arr[j])
                {
                   ans=true;
                   return ans; 
                }    
            }    
        } 
        return ans;
    }
};