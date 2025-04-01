/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> leafnode(TreeNode* root)
    {
        vector<int>ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            root=st.top();
            st.pop();
            if(root->right==NULL &&  root->left==NULL)
            {
                ans.push_back(root->val);
            }
            if(root->right!=NULL)
            {
               st.push(root->right);
            }
            if(root->left!=NULL)
            {
               st.push(root->left);
            }
        }
        return ans;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
         vector<int> r1=leafnode(root1);
         vector<int> r2=leafnode(root2);
         if(r1.size()!=r2.size())
         {
            return false;
         }
         for(int i=0;i<r1.size();i++)
         {
            if(r1[i]!=r2[i])
            {
                return false;
            }
         }
         return true;
    }
};