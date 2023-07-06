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
    TreeNode* increasingBST(TreeNode* root) {
    TreeNode* dummy=new TreeNode();
        TreeNode* curr;
        curr=dummy;
        // vector<int>ans;
        inorder(root,curr);
        // for(int x:ans)
        // {
        //     curr->right=new TreeNode(x);
        //     curr=curr->right;
        // }
        return dummy->right;
        
    }
    public: void inorder(TreeNode* root,TreeNode*& curr)
    {
        if(root==NULL) return;
        inorder(root->left,curr);
       curr->right=new TreeNode(root->val);
        curr=curr->right;
        inorder(root->right,curr);
        
    }
};