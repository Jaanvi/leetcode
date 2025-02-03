class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) 
    {
          int size=arr.size();
          int count=1;
          int maxi=0;
          if(size==1)
          {
            return 1;
          }
          for(int i=0;i<size-1;i++)
          {
              if(arr[i]<arr[i+1])
              {
                count++;
              }
              else
              {
                count=1;
              }
              maxi=max(maxi,count);
          }
          int count1=1;
          for(int i=0;i<size-1;i++)
          {
              if(arr[i]>arr[i+1])
              {
                count1++;
              }
              else
              {
                count1=1;
              }
              maxi=max(maxi,count1);
          }
          return maxi;
    }
};