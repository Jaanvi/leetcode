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
    vector<int> inorder(TreeNode* root)
    {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        vector<int> left=inorder(root->left);
        for(int i=0;i<left.size();i++)
        {
            ans.push_back(left[i]);
        }

        ans.push_back(root->val);
        vector<int> right=inorder(root->right);
        for(int i=0;i<right.size();i++)
        {
            ans.push_back(right[i]);
        }

        return ans;
    }
    void recoverTree(TreeNode* root) 
    {
        if(root==NULL)
        {
            return;
        }
        int i=0;
        vector<int>ans=inorder(root);
        sort(ans.begin(),ans.end());
        correctBST(root,ans,i);
    }

    void correctBST(TreeNode* root,vector<int>& ans,int & i)
    {
        if(root==NULL)
        {
            return;
        }
         correctBST(root->left,ans,i);
         root->val=ans[i++];
          correctBST(root->right,ans,i);
    }
};