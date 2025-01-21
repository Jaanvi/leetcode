// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int lower = 1, higher = n;
        
        while (lower < higher) 
        {  
            int mid = lower + (higher - lower) / 2;  // To avoid integer overflow
            
            if (isBadVersion(mid)) 
            {
                higher = mid;  // Look for an earlier bad version
            } 
            else 
            {
                lower = mid + 1;  // Look in the later versions
            }
        }
        
        return higher;  // The first bad version
    }
};
