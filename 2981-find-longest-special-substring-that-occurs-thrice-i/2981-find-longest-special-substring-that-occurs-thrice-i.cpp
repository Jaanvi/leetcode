class Solution {
public:
    int maximumLength(string s) 
    {
        map<string, int> m; // Map to store counts of special substrings
        int size = s.length();
        int maxi = 0;

        // Identify special substrings
        for (int i = 0; i < size; i++) {
            string current = "";
            for (int j = i; j < size; j++) {
                if (s[j] == s[i]) { // Ensure all characters in the substring are the same
                    current += s[j];
                    m[current]++; // Increment count for the special substring
                } else {
                    break; // Stop when a different character is encountered
                }
            }
        }

        // Find the longest substring appearing at least 3 times
        for (const auto& [substr, count] : m) {
            if (count >= 3) {
                maxi = std::max(maxi, (int)substr.length());
            }
        }

        return maxi > 0 ? maxi : -1; // Return -1 if no valid substring is found
    }
};







// class Solution {
// public:
//     int maximumLength(string s) 
//     {
//         map<string,int>m;
//         int maxi=0;
//         int size=s.length();
//         vector<string> sstr;
//         for(int i=0;i<size;i++)
//         {
//             for(int j=1;j<size;j++)
//             {
//                 sstr.push_back(s.substr(i,j));   
//             }  
//         }
//         for(int i=0;i<sstr.size();i++)
//         {
//             m[sstr[i]]++;
//             if(m[sstr[i]]>=3)
//             {
//                 maxi = max(maxi,sstr[i].length());
//             }    
//         } 
//         return maxi > 0 ? maxi : -1;
//     }
// };