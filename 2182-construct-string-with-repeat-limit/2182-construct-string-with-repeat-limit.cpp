
class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) 
    {
        
        map<char, int> m;
        for (char ch : s) {
            m[ch]++;
        }

       
        priority_queue<pair<char, int>> pq;
        for (auto it = m.rbegin(); it != m.rend(); ++it) 
        {
            pq.push({it->first, it->second});
        }

        string ans = "";
        
        while (!pq.empty()) {
            
            auto [ch1, freq1] = pq.top();
            pq.pop();

           
            int useCount = min(freq1, repeatLimit);
            ans += string(useCount, ch1); 

           
            freq1 -= useCount;

            
            if (freq1 > 0) 
            {
              
                if (pq.empty()) break;

                auto [ch2, freq2] = pq.top();
                pq.pop();

                ans += ch2;
                freq2--;

               
                if (freq1 > 0) pq.push({ch1, freq1});
                if (freq2 > 0) pq.push({ch2, freq2});
            }
        }

        return ans;
    }
};






















// class Solution {
// public:
//     string repeatLimitedString(string s, int repeatLimit) 
//     {
//         int size=s.length();
//         map<char,int>m;
//         for(int i=0;i<size;i++)
//         {
//             m[s[i]]++;
//         }
        
//         priority_queue<pair<char,int>>pq;
//         for(map<char,int>::iterator it=m.begin();it!=m.end();++it)
//         {
//             pq.push({it->first,it->second});
//         }    
            
//         string ans;
//         while(!pq.empty())
//         {
//             auto [ch1,freq1]=pq.top();
//             pq.pop();
            
//             int usecount=min(freq1,repeatLimit);
//             ans=ans+string(usecount,ch1);
            
//             freq1=freq1-usecount;    
            
//             if(freq1>0)
//             {
//                 if (pq.empty()) break; // Check if the priority queue is empty
                
//                 auto [ch2,freq2]=pq.top();
//                 pq.pop();
                
//                 ans=ans+ch2;
//                 freq2--;
                
//                 if (freq1 > 0) pq.push({ch1, freq1});
//                 if (freq2 > 0) pq.push({ch2, freq2});
//             }   
            
//         }    
//         return ans;
//     }
// };