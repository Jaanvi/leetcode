class Solution {
public:
    int maxAscendingSum(vector<int>& arr) 
    {
        int size=arr.size();
        int sum=arr[0];
        int maxi=arr[0];
        for(int i=1;i<size;i++)
        {
            if(arr[i-1]<arr[i])
            {
                sum+=arr[i];
            }
            else
            {
                maxi = max(sum, maxi);
                sum=arr[i];
            }
            maxi = max(sum, maxi); 
        }
        return maxi;
    }
};