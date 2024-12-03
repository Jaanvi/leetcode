#include <sstream> // Include for stringstream

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        std::stringstream temp; // Use stringstream instead of string for efficient concatenation
        int size = spaces.size();
        int j = 0;

        for (int i = 0; i < size; i++) 
        {
            int count = 0;
            while (spaces[i] != j) 
            {
                count++;
                j++;
            }
            temp << s.substr(j - count, count) << " "; // Append substring and space to stringstream
        }
        temp << s.substr(j, s.length()); // Add the remaining part of the string
        return temp.str(); // Convert stringstream to string
    }
};






// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) 
//     {
//         string temp="";
//         int size=spaces.size();
//         int j=0;
//         for(int i=0;i<size;i++)
//         {
//             int count=0;
//             while(spaces[i]!=j)
//             {
//                 count++;
//                 j++;
//             }  
//             temp=temp + s.substr(j-count,count) + " ";
//         }
//         temp=temp+s.substr(j,s.length());
//         return temp;
//     }
// };