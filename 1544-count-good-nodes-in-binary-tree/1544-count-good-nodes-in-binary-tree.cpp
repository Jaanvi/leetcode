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
    // vector<int> good(TreeNode* root)
    // {
    //     vector<int>ans;
    //     stack<int>st;
    //     st.push(root);
    //     int maxi=0;
    //     while(!st.empty())
    //     {
    //        TreeNode* temp=st.top();
    //        st.pop();
    //        if(temp->val>=maxi)
    //        {
    //          count++;
    //          maxi=temp->val;
    //        }
    //        if(root->right!=NULL)
    //        {
    //          st.push(root->right);
    //        }
    //        if(root->leftt!=NULL)
    //        {
    //          st.push(root->left);
    //        }
    //     }
    // }
    int goodNodes(TreeNode* root) 
    {
        int count=0;
        stack<pair<TreeNode*,int>>st;
        st.push({root, root->val});
        while(!st.empty())
        {
           auto [temp, maxi] = st.top();
           st.pop();
           if(temp->val>=maxi)
           {
             count++;
           }
           int newMax = max(maxi, temp->val);
           if(temp->right!=NULL)
           {
             st.push({temp->right, newMax});
           }
           if(temp->left!=NULL)
           {
             st.push({temp->left, newMax});
           }
        }
        return count;
    }
};