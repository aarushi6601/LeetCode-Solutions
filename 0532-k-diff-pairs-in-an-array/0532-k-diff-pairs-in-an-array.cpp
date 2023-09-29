class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int res=0;
        for(auto i:nums) mp[i]++;
        for(auto i:mp)
            if( (!k && i.second>1) || (k && mp.find(i.first+k)!=mp.end()) ) res++;
        return res;
    }
};