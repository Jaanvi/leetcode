class Solution {
public:
    int maxScore(string s) 
    {
        int len = s.length();
        int maxi = 0;
        
        for (int i = 1; i < len; i++)
        {
            int zero = 0;
            int one = 0;  
            for (int k = 0; k < i; k++)
            {
                if (s[k] == '0')
                {
                    zero++;
                }
            }
            for (int j = i; j < len; j++)
            {
                if (s[j] == '1')
                {
                    one++;
                } 
            }

            int sum = zero + one;
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};
