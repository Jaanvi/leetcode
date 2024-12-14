
/////DiY
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans = 0;
        int l = 0,r = 0;
        int n = nums.size();
        
        multiset<int> st;
        while(l<n){
            
            while(r<n){
                if(st.size()==0){
                    st.insert(nums[r]);
                    r++;
                }
                else{
                    int mn = *st.begin();    
                    int mx = *st.rbegin();
                
                    mn = min(mn,nums[r]);
                    mx = max(mx,nums[r]);
                    if(mx-mn>2)break;
                    st.insert(nums[r]);
                    r++;
                }
            }
          
            long long len = r-l;
            ans+=len;
            st.erase(st.find(nums[l]));
            l++;
        }
        return ans;
    }
};













// class Solution {
// public:
//     long long continuousSubarrays(vector<int>& nums) 
//     {
//         long long count=0;
//         int size=nums.size();
//         for(int i=0;i<size;i++)
//         {
//             vector<vector<int>>res;
//             vector<int>subary;
//             for(int j=i;j<size;j++)
//             {
//                 subary.push_back(nums[j]);
//                 res.push_back(subary);
//             }
//             for(int k=0;k<res.size();k++)
//             {
//                 int mini=INT_MAX;
//                 int maxi=INT_MIN;
//                 for(int j=0;j<res[k].size();j++)
//                 {
//                     if(res[k][j]<=mini)
//                     {
//                         mini=res[k][j];
//                     }  
//                     if(res[k][j]>=maxi)
//                     {
//                         maxi=res[k][j];
//                     }  
//                 } 
//                 int diff=abs(mini-maxi);
//                 if(0<=diff && diff<=2)
//                 {
//                     count++;
//                 }
//             }
            
//         }
//         return count;
//     }
// };