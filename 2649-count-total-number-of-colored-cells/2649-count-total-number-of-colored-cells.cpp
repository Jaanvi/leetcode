class Solution {
public:
    long long coloredCells(int n) 
    {
       long sum=(2L*n*(n-1))+1;
       return sum; 
    }
};