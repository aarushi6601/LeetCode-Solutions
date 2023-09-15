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
        //we are just recording the max value of the node encountered so far, if the current val of the node is greater then the currmax we have to update currmax and reset it, increase our count of good nodes and continue exploration in the left and the right subtree
       if(node->val>=currMax)
       {
           currMax=node->val;
           cnt++;
           
       }
        solve(node->left,currMax);
        solve(node->right,currMax);
    }
    

};