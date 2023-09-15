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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return {};
        //should we do level order traversal and then on each level record the highest value among all tree nodes
        vector<int>ans;
        queue<TreeNode*> q;
        q.push(root);
       
        while(!q.empty())
        {
            int currMax=INT_MIN;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                //record the max value of the node so far one every level
                currMax=max(currMax,node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(currMax);
        }
        return ans;
    }
};