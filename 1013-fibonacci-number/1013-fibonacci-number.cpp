class Solution {
public:
    int fib(int n) 
    {
        int slast=0;
        int last=1;
        if(n<2)
        {
            return n;
        }
         
        for(int i=2;i<=n;i++)
        {
           int curr=slast+last;
           slast=last;
           last=curr;
        }
        return last;
    }
};