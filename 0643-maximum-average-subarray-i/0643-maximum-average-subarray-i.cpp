class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(i >= k - 1) {
                double avg = sum / k;
                ans = max(ans, avg);
                sum -= nums[i - (k - 1)];
            }
        }
        return ans;
    }
};
