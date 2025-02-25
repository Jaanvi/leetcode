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
    TreeNode*prev=nullptr;
    bool flag=true;
    void inorder(TreeNode* root)
    {
        if(root==nullptr)
        return;
        inorder(root->left);
        //here if root value is less than previous node value than it is false
        if(prev!=nullptr && prev->val >= root->val){
        flag=false;
        return;
        }
        prev=root;
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return flag;
    }

};