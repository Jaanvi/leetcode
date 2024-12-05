class Solution {
public:
    bool canChange(string start, string target) {
        // Check if both strings have the same count of 'L' and 'R' pieces
        int n = start.length();
        
        if (count(start.begin(), start.end(), 'L') != count(target.begin(), target.end(), 'L') ||
            count(start.begin(), start.end(), 'R') != count(target.begin(), target.end(), 'R')) {
            return false;
        }

        int s = 0, t = 0; // Two pointers for start and target
        
        while (s < n && t < n) {
            // Skip over blanks in both strings
            while (s < n && start[s] == '_') s++;
            while (t < n && target[t] == '_') t++;
            
            // If both pointers go out of bounds
            if (s == n && t == n) return true;
            
            // If one string has reached the end but the other hasn't
            if (s == n || t == n) return false;
            
            // If the characters at the pointers don't match
            if (start[s] != target[t]) return false;
            
            // If 'L' in start can't move left, or 'R' can't move right, return false
            if (start[s] == 'L' && s < t) return false;  // 'L' can't move right
            if (start[s] == 'R' && s > t) return false;  // 'R' can't move left
            
            // Move both pointers
            s++;
            t++;
        }
        
        return true;
    }
};








// class Solution {
// public:
//     bool canChange(string start, string target) 
//     {
//            int e=start.length()-1; 
//            int s=0;
//            while(e>=s)
//            {
//                if(s + 1 < start.length() && start[s]=='_' &&  start[s+1]=='L')
//                {
//                    swap(start[s],start[s+1]);
//                    s++;
//                }
//                else if(e-1>=0 && start[e]=='L' && start[e-1]=='_')
//                {
//                      swap(start[e],start[e-1]);
//                      e--;
//                } 
//                else if (s + 1 < start.length() && start[s]=='R' &&  start[s+1]=='_')
//                {
//                    swap(start[s],start[s+1]);
//                    s++;
//                }
//                else if(e-1>=0 && start[e]=='_' && start[e-1]=='R')
//                {
//                      swap(start[e],start[e-1]);
//                      e--;
//                } 
//                else if(e-1>=0 && start[e]=='_' && start[e-1]=='-')
//                {
//                    int count=e;
//                      while(start[e]!='R')
//                      {
//                          e--;
//                      }
//                    swap(start[e],start[count]);
//                } 
//                else if( s+1<start.length() && start[s]=='_' && start[s+1]=='-')
//                {
//                    int count=s;
//                      while(start[s]!='L')
//                      {
//                          s++;
//                      }
//                    swap(start[s],start[count]);
//                } 
               
               
//                else
//                {
//                    s++;
//                    e--;
//                }    
//            }
//         cout<<start;
//           if(start==target)
//           {
//               return true;
//           }
//           else return false;
        
//     }
// };