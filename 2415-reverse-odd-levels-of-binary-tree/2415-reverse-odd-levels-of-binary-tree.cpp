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
    void reverseOddLevelsHelper(TreeNode* left, TreeNode* right, int level) {
        if (!left || !right) return;

      
        if (level % 2 == 1) {
            std::swap(left->val, right->val);
        }

        reverseOddLevelsHelper(left->left, right->right, level + 1);
        reverseOddLevelsHelper(left->right, right->left, level + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return nullptr; 
        reverseOddLevelsHelper(root->left, root->right, 1);
        return root;
    }
};
