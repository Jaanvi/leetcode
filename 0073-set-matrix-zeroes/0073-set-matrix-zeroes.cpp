class Solution {
public:
    
 void setZeroes(vector<vector<int>> &arr) 
{
   int sr=arr.size();
   int sc=arr[0].size();
   int matrow=arr[0][0];

   for(int i=0;i<sr;i++)
   {
      if(arr[i][0]==0)
      {
         matrow=0;
      }
       for(int j=1;j<sc;j++)
       {
          if(arr[i][j]==0)
          {
              arr[i][0]=0;
              arr[0][j]=0;
          }
       }
   }


   for(int i=1;i<sr;i++)
   {
       for(int j=1;j<sc;j++)
       {
          if(arr[0][j]==0 || arr[i][0]==0)
          {
              arr[i][j]=0;
          }
       }
   }

    if(arr[0][0]==0)
   {
       for(int i=0;i<sc;i++)
       {
           arr[0][i]=0;
       }
   }
   if(matrow==0)
   {
       for(int i=0;i<sr;i++)
       {
           arr[i][0]=0;
       }
   }
   

}

};