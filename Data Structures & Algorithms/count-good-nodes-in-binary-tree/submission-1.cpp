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
    int dfs(TreeNode* root,int x)
    {
        if(!root)
        {
            return 0;
        }
        if(root->val>=x)
        {
            return 1+dfs(root->left,root->val)+dfs(root->right,root->val);
        }
        return dfs(root->left,x)+dfs(root->right,x);
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};
