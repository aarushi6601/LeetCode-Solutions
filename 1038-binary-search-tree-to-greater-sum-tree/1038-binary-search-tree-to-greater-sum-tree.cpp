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
    TreeNode* bstToGst(TreeNode* root) {
        int count=0;
     solve(root,count);
       return root;
        
    }
    void solve(TreeNode* root,int& count)
    {
       
        if(root==NULL) return;
        solve(root->right,count);
        root->val+=count;
        count=root->val;
        solve(root->left,count);
        
    }
};