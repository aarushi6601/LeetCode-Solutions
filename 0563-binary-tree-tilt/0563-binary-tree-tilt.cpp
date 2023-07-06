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
     int res=0;
public:
   
    int findTilt(TreeNode* root) {
        postorder(root);
        return res;
    }
   int postorder(TreeNode* root)
    {
        if(root==NULL) return 0;
        int left_sum=postorder(root->left);
       int right_sum=postorder(root->right);
       res+=abs(left_sum-right_sum);
       return root->val+left_sum+right_sum;
    }
};