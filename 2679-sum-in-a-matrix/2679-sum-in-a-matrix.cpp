class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            sort(nums[i].rbegin(),nums[i].rend());//sorting each row in decreasing order
        }
        int ma=-1,ans=0;
        for(int j=0;j<nums[0].size();j++)
        {
            for(int i=0;i<nums.size();i++)
            {
                ma=max(ma,nums[i][j]);
            }
            ans+=ma;
            ma=-1;
        }
        return ans;
    }
};