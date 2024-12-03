class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        std :: stringstream temp;
        int size=spaces.size();
        int j=0;
        for(int i=0;i<size;i++)
        {
            int count=0;
            while(spaces[i]!=j)
            {
                count++;
                j++;
            }  
            temp << s.substr(j-count,count) << " ";
        }
        temp<<s.substr(j,s.length());
        return temp.str();
    }
};