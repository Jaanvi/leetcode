class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
       
        if (n % 2 != 0) return false;
        int openCount = 0;  
        int freeCount = 0; 

        for (int i = 0; i < n; ++i) {
            if (s[i] == '(' || locked[i] == '0') {
                openCount++;
            } else {
                openCount--;
            }

            if (openCount < 0) {
                return false;  
            }
        }

        int closeCount = 0; 
        freeCount = 0;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == ')' || locked[i] == '0') {
                closeCount++;
            } else {
                closeCount--;
            }

            if (closeCount < 0) {
                return false; 
            }
        }

        return true;
    }
};
