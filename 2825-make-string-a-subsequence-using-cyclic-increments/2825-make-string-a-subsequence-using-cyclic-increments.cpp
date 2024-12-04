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
            // Case 1: Exact match
            if (str1[i] == str2[j]) 
            {
                j++; // Move to the next character in str2
            }
            // Case 2: Increment match (except for 'z')
            else if (str1[i] + 1 == str2[j] && str1[i] != 'z') 
            {
                j++; // Move to the next character in str2
            }
            // Case 3: Wrap-around from 'z' to 'a'
            else if (str1[i] == 'z' && str2[j] == 'a') 
            {
                j++; // Move to the next character in str2
            }
        }

        // If we've matched all characters of str2, return true; otherwise, false
        return j == n;
    }
};



// #include <sstream>
// class Solution {
// public:
//     bool canMakeSubsequence(string str1, string str2) 
//     {  
//         std:: stringstream temp;
//         for(int i=0;i<str2.length();i++)
//         {
//             bool subsequence=false;
//             for(int j=0;j<str1.length();j++)
//             {
//                 if(str1[j]==str2[i])
//                 {
//                     subsequence=true;
//                     temp<<str1[j];
//                     break;
//                 }
//                 else if(str1[j]+1==str2[i] && str1[j]!='z')
//                 {
//                    subsequence=true;
//                     temp<<str2[i];
//                     break;
//                 }
//                 else if(str1[j]=='z')
//                 {
//                     str1[j]='a';
//                     if(str2[i]=='a')
//                     {
//                         temp<<str1[j];
//                         subsequence=true;
//                     }   
//                     break;
//                 }    
//             } 
//             if (!subsequence) 
//             {
//                 return false;
//             }
//         } 
//         if(str2==temp.str())
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }    
//     }
// };