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
    int maxxdepth(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=maxxdepth(root->left);
        int right=maxxdepth(root->right);
        int hight=max(left,right)+1;
        return hight;
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        bool left=isBalanced(root->left) ;
        bool right=isBalanced(root->right) ;
        int diff=(abs(maxxdepth(root->left)-maxxdepth(root->right)));
        
        return ((diff<=1 && left) && right);
    }
};