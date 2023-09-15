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
    int cnt=0;
    int goodNodes(TreeNode* root) {
        solve(root,root->val);
        return cnt;
    }
    void solve(TreeNode* node,int currMax){
        if(node==NULL) return;
       if(node->val>=currMax)
       {
           currMax=node->val;
           cnt++;
           
       }
        solve(node->left,currMax);
        solve(node->right,currMax);
    }
    

};