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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return recursive(nums,0,nums.size());
    }
    //returns the root of the tree as asked for, by recursively building the left and the right subtrees in the similar manner and the max function finds the index at which the value is the maximum or which should be made the new root of the subsequent left and right subtree
 TreeNode* recursive(vector<int>nums, int left,int right)
    {
        if(left==right) return NULL;
        int max_i= max(nums,left,right);
        TreeNode* root=new TreeNode(nums[max_i]);
        root->left= recursive(nums,left,max_i);
        root->right=recursive(nums,max_i+1,right);
        return root;
        
    }
 int max(vector<int>nums,int left,int right)
    {
        //the max function finds the max_i or the max index which can be claimed as the root
        int max=nums[left];
        int max_i=left;
        for(int i=left;i<right;i++)
        {
            if(nums[i]>max)
            {
                max_i=i;
                max=nums[i];
            }
        }
        return max_i;
    }
};