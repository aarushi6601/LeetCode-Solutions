class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int,int>mp;
        for(int x:nums)
            mp[x]++;
        for(auto [x,y]:mp)
        {
            if(y>=2)
                return true;
        }
        return false;
    }
};