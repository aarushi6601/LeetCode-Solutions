/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans=NULL;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(original,cloned,target);
        return ans;
    }
    void solve(TreeNode* original, TreeNode* cloned,TreeNode* target)
    {
        if(original ==NULL) return;
        if(original==target)
        {
            // if(original->left==cloned->left && original->right==cloned->right)
                ans=cloned;
        }
        getTargetCopy(original->left,cloned->left,target);
        getTargetCopy(original->right,cloned->right,target);
    }
};