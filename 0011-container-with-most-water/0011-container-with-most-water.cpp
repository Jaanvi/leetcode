class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int size=height.size();
        int s=0;
        int e=size-1;
        int maxi=0;
        while(s<e)
        {
           int heit=min(height[s],height[e]);
           int capcity=heit*(e-s);
           if(capcity>maxi)
           {
            maxi=capcity;
           }
           if(height[s]>height[e])
           {
              e--;
           }
           else
           {
            s++;
           }
        }
        return maxi;
    }
};