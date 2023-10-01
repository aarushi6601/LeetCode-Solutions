class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<int> prf(nums.size()), suff(nums.size());
        // prefix max
        prf[0] = nums[0];
        for (int i = 1; i < nums.size() ; i++) {
            prf[i] = max(prf[i - 1], nums[i-1]);
        }
        // suffix max
        suff[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            suff[i] = max(suff[i + 1], nums[i+1]);
        }
        // initialize ans as 0 to automatically eliminate any negative values
        long long ans = 0;
        for (int i = 1; i < nums.size() - 1; i++) {
            ans = max(ans, (long long)(prf[i] - nums[i]) * suff[i]);
        }
        return ans;
    }
};