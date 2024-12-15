class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) 
    {
       priority_queue<pair<double,int>>maxi;
       for(int i=0;i<classes.size();i++)
       {
           int oldpass=classes[i][0];
           int oldtotal=classes[i][1];
           double oldratio=(double)oldpass/(double)oldtotal;
           
           int newpass=classes[i][0]+1;
           int newtotal=classes[i][1]+1;
           double newratio=(double)newpass/(double)newtotal;
           
           double gainRatio=newratio-oldratio;
           maxi.push({gainRatio,i});
       }    
        
        while(extraStudents!=0)
        {
            pair<double,int>p;//act as a vector
            p=maxi.top();
            maxi.pop();
            int index=p.second;
            //now update the class student jiska maximum gain ratio hai
            classes[index][0]=classes[index][0]+1;
            classes[index][1]=classes[index][1]+1;
            //ab ye old element ke tareh kaam krega aur iska new elament daalne pe jo gain ratio aayga wo ab hum push                 krege maxi me
            double oldratio=(double)classes[index][0]/(double)classes[index][1];
            
            int newpass=classes[index][0]+1;
            int newtotal=classes[index][1]+1;
            double newratio=(double)newpass/(double)newtotal;
            
            double gainratio=newratio-oldratio;
            maxi.push({gainratio,index});
             
            extraStudents--;
        }   
        double sum=0;
        for(int i=0;i<classes.size();i++)
        {
           sum += (double)classes[i][0]/(double)classes[i][1]; 
        }
        
        double avg=sum/(double)classes.size();
        return avg;
    }
};