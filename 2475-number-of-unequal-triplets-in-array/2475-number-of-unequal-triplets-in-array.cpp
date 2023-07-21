class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        unordered_map<int,int>mp;
        int left=0,right=nums.size(),cnt=0,res=0;
        for(int n:nums)
            mp[n]++;
        for(auto [n,cnt]:mp)
        {
            right=right-cnt;
            res+=left*cnt*right;
            left+=cnt;
        }
        return res;
    }
};