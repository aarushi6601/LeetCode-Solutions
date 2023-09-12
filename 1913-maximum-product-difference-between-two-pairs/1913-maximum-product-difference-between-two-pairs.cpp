class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        //pair largest 2 nos together for the first pair and the 2 smallest nos together for the second pair so that the resultant of their product difference is max
        sort(nums.begin(),nums.end());int n=nums.size();
        int ans=(nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
        return ans;
    }
};