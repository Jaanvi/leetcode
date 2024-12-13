#include<vector>
#include<queue>
 class Solution 
 {
   public:
     long long findScore(vector<int>& nums) 
      {
         int size=nums.size();
         long long sum=0;
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minheap;
         for(int i=0;i<size;i++)
         {
             minheap.push({nums[i],i});
         } 
         vector<bool> visited(size, false);
         while(!minheap.empty())
         {  
             auto [val,index]=minheap.top();
             minheap.pop();
             if(visited[index])
             {
                 continue;;
             }
             
             sum+=nums[index];
             
             if(index-1>=0)
             {
                 visited[index-1]=true;
             }
             visited[index]=true;
             if(index+1<size)
             {
                 visited[index+1]=true;
             }
         }
         return sum;
      }
 };











// #include<map>
// class Solution 
// {
// public:
//     long long findScore(vector<int>& nums) 
//     {
//         map<int,bool>ans;
//         long long sum=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             ans[i]=false;
//         }
//         while(true)
//         {
//             int minindex=-1;
//             for(int i=0;i<nums.size();i++)
//             {
//                 if(( minindex==-1 || nums[i]<nums[minindex]) && ans[i]==false)
//                 {
//                     minindex=i;
//                 }    
//             }
            
//             if(minindex==-1)
//             {
//                 break;
//             }
//             if(minindex-1>=0)
//             {
//                 ans[minindex-1]=true; 
//             }   
//             ans[minindex]=true;
//             if(minindex+1<nums.size())
//             {
//                 ans[minindex+1]=true; 
//             }  
//             sum+=nums[minindex];
//         } 
//         return sum;
//     }
// };