class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        vector<int> l(nums.size()), r(nums.size());
        // prefix max
        l[0] = nums[0];
        for (int i = 1; i < nums.size() ; i++) {
            l[i] = max(l[i - 1], nums[i - 1]);
        }
        // suffix max
        r[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            r[i] = max(r[i + 1], nums[i + 1]);
        }
        // initialize ans as 0 to automatically eliminate any negative values
        long long ans = 0;
        for (int i = 1; i < nums.size() - 1; i++) {
            ans = max(ans, (long long)(l[i] - nums[i]) * r[i]);
        }
        return ans;
    }
};