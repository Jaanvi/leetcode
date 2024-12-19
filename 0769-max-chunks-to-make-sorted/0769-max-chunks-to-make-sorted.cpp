class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) 
    {
        int count=1;
        int maxi=0;
      for(int i=0;i<arr.size()-1;i++)
      {
          maxi=max(arr[i],maxi);
          if(maxi==i)
          {
              count++;
          }
      }
        return count;
    }
};



//  int count=1;
//         int maxi=0;
//         for(int i=0;i<arr.size()-1;i++)
//         {
//            maxi=max(maxi,arr[i]);
//            if(maxi==i)
//            {
//                count++;
//            }
//         }
//         return count;