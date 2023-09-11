class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        //brute force the indices and the ones which have the highest frequency they must be allocated with the highest or the largest values
      vector<int>cnt(nums.size());
        int n=nums.size();
        for(vector<int>req:requests)
        {
            int l=req[0],r=req[1];
cnt[l]++;
            if(r!=nums.size()-1) cnt[r+1]--;
        }
        for(int i=1;i<n;i++)
            cnt[i]+=cnt[i-1];
        sort(cnt.begin(),cnt.end());
        sort(nums.begin(),nums.end());
        //cnt array becomes 01112 so it should be like 12345 we are only considered that 5 and 1 should be at their designated positions rest 234 cn be shuffled among themselves
        int ans=0;int mod=1e9+7;
        for(int i=0;i<nums.size();i++)
            ans=(ans+(long long)nums[i]*cnt[i])%mod;
        return ans;
    }
};