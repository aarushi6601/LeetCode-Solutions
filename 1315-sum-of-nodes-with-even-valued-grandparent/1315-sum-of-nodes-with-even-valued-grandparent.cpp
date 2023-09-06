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
     int sum=0;
    int sumEvenGrandparent(TreeNode* root) {
       
        solve(root,NULL,NULL);
        return sum;
    }
    void solve(TreeNode* child, TreeNode* parent, TreeNode*  grandparent )
    {
        if(child==NULL) return;//base case
        if(grandparent!=NULL && grandparent->val%2==0)
            sum+=child->val;
        solve(child->left,child,parent);
        solve(child->right,child,parent);
        //doing dfs recursively for the left and the right subtrees and by replacin it with new child parent and grandparents
    }
};