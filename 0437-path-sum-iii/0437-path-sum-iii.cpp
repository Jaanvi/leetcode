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
    int  pathtemp(TreeNode* root, int targetSum,long currsum,map<long,int>& m )
    {
        if(root==NULL)
        {
            return 0;
        }
        int count=0;
        currsum+=root->val;
        if(currsum==targetSum)
        {
            count++;
        }
        if(m.find(currsum-targetSum)!=m.end())
        {
            count += m[currsum - targetSum];
        }
        m[currsum]++;

        count+=pathtemp(root->left,targetSum,currsum,m);
        count+=pathtemp(root->right,targetSum,currsum,m);
         m[currsum]--;
         return count;
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        map<long,int>m;
        int res= pathtemp(root,targetSum,0,m);
        return res;
    }
};