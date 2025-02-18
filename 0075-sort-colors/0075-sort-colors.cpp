class Solution {
public:
    void sortColors(vector<int>& arr) 
    {
        int size=arr.size();
        int end=size-1;
        int start=0;
        int left=0;
        while(start<=end)
        {
            if(arr[start]<1)
            {
               swap(arr[start],arr[left]);
               start++;
               left++;
            }
            else if(arr[start]>1)
            {
               swap(arr[start],arr[end]);
               end--;
            }
            else
            {
                start++;
            }
        }
    }
};