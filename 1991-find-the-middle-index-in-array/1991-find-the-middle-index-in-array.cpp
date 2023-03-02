class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    int rsum = accumulate(begin(nums), end(nums), 0);
    for (int i = 0, lsum = 0; i < nums.size(); lsum += nums[i++])
        if (lsum * 2 == rsum - nums[i])
            return i;
    return -1;
}
    
};