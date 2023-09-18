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
    int ans;
    int distributeCoins(TreeNode* root) {
        ans=0;
       solve(root);
        return ans;
    }
    int solve(TreeNode* node)
    {
        if(!node) return 0;
        
        int left=solve(node->left);
        int right=solve(node->right);
        ans+=abs(left)+abs(right);
        return node->val+left+right-1;
        
    }
};

//if the leaf has 0 coins than it needs +1 coin from parent to the leaf, if it has greater than 1 coin, it needs to push off n-1 coins from the leaf to the parent however no of moves are determined by excess=abs(coins-1); afterwards we never have to consider this leaf again in our solution again.the number of moves we make from this node to and from its children is abs(dfs(node.left)) + abs(dfs(node.right)). After, we have an excess of node.val + dfs(node.left) + dfs(node.right) - 1 coins at this node.