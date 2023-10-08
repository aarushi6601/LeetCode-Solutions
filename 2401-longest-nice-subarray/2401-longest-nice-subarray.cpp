class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans=0,used=0,start=0;
        for(int end=0;end<nums.size();end++)
        {
            while((used & nums[end])!=0)
                used^=nums[start++];
            used|=nums[end];
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};