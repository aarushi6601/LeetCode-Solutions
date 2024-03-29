class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //running sum==pref sum or sum till ith position
        vector<int>sum(nums.size(),0);
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            sum[i]=sum[i-1]+nums[i];
        return sum;
    }
    
};