class TrieNode
{
  public:
   char data;
   TrieNode* child[26];
   int childcount;
   bool isterminal;

   TrieNode(char ch)
   {
     data=ch;
     for(int i=0;i<26;i++)
     {
        child[i]=NULL;
     }
     childcount=0;
     isterminal=false;
   }
};

class Trie
{
  public:
  TrieNode* root;

  Trie()
  {
    root=new TrieNode('\0');
  }

  void insertUtil(TrieNode* root,string word)
  {
     //base condition
     if(word.length()==0)
     {
        root->isterminal=true;
        return;
     }

     int index=word[0]-'a';
     TrieNode* children;

     if(root->child[index]!=NULL)
     {
        children=root->child[index];
     }
     else
     {
        //absent
        children=new TrieNode(word[0]);
        root->childcount++;
        root->child[index]=children;
     }
     //recursion call
    return  insertUtil(children,word.substr(1));
     
  }
  void insert(string word)
  {
     insertUtil(root,word);
  }

  void longestprfx(string str,string &ans)
  {
    TrieNode* curr = root;

        for (int i = 0; i < str.length(); i++) 
        {
            if (curr->childcount == 1 && !curr->isterminal) 
            {
                ans.push_back(str[i]);
                int index = str[i] - 'a';
                curr = curr->child[index];
            } 
            else
            {
                break; // divergence or terminal found
            }

            if (curr->isterminal) {
                break;
            }
        }
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
       int size=strs.size();
       Trie t;
       for(int i=0;i<size;i++)
       {
          t.insert(strs[i]);
       } 
       string ans = "";
        // Use first word as reference
        t.longestprfx(strs[0], ans);

        return ans;
    }
};