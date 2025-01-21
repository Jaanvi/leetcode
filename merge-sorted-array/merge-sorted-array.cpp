class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i=m-1;//initialize the i
        int j=n-1;//initialize the j
        int k=m+n-1;//for the size of new sorted vector
        while(j>=0)
        {
            if(i>=0 && nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];// Place nums1[i] at the end of nums1
                i--;// Move i to the left
            }
            else
            {
                nums1[k]=nums2[j];// Place nums2[j] at the end of nums1
                j--;//move j to the left
            }
            k--;// Move k to the left
        }
    }
};