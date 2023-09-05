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
    int ans=0;
    int sumofsubtree(TreeNode* root,int& cnt)
    {
        if(root==NULL) return 0;
        //finding for left subtree
        cnt++;
        int left=sumofsubtree(root->left,cnt);
        int right=sumofsubtree(root->right,cnt);
        return (root->val+left+right); //sumofsubtree function gives us the sum for the whole subtree including the root val and adding the left and right subtree sums to it
        
    }
    //helper function solve to calculate the avg and detect if the avg ==root.val or not
    void solve(TreeNode* root)
    {
        if(root==NULL) return;
        int cnt=0;
         int avg = (sumofsubtree(root,cnt))/cnt;
        //calling the sumofsubtree function which gives the value of the sum and then we divide by cnt
        if(avg==root->val) ans++;
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        ans=0;
        solve(root);
        return ans;
    }
};