class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
         int len=sentence.length();
        int i=0;
         int res=1;//for the count of the word
        while(i<len)
        {
            int count=0;
            while(i < len && sentence[i]!=' ')
            {
               count++;
                i++;
            }
            if(count>=searchWord.length())
            {
                string temp=sentence.substr(i-count,count);
                if (temp.substr(0, searchWord.length()) == searchWord) 
                {
                    // Check prefix
                    return res; // Found match
                }
            } 
            res++;
            i++;
        }
        return -1;
    }
};