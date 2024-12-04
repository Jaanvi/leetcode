#include <sstream>
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) 
    {  
        int m = str1.length();
        int n = str2.length();
        int j = 0; // Pointer for str2

        for (int i = 0; i < m && j < n; i++) 
        {
            if (str1[i] == str2[j]) 
            {
                j++; // Move to the next character in str2
            }
            else if (str1[i] + 1 == str2[j] && str1[i] != 'z') 
            {
                j++; 
            }
            else if (str1[i] == 'z' && str2[j] == 'a') 
            {
                j++; 
            }
        }
        return j == n;
    }
};
