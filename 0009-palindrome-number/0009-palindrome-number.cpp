class Solution {
public:
    vector<int> reversenum(int x)
    {
      vector<int>rev;
      int num=x;
      while(num!=0)
      {
        int rem=num%10;
        rev.push_back(rem);
        num=num/10;
      }   
        return rev;
    }
    bool isPalindrome(int x) 
    {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) 
        {
            return false;
        }
        
        
        vector<int>ans;
        ans=reversenum(x);
        int size=ans.size();
        bool palindrom=true;
        int num=x;
        while(num!=0)
        {
           int rem=num%10;
           if(rem==ans[size-1]) 
           {
              palindrom=true;
           }  
           else
           {
               palindrom=false;
               return palindrom;
           }  
           num=num/10;
           size--; 
        } 
        return palindrom;
    }
};