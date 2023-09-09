class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
       for(int x:nums)
           mp[x]++;
        int ans=0,count=0;
        for(auto it:mp)
        {
            count=it.second;
            ans+=count*(count-1)/2;
        }
        return ans;
    }
};