class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>mp;
        mp[0]=-1;
        int maxi=0,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            cnt+=nums[i]==0?-1:1;
            if(mp.find(cnt)!=mp.end())
                maxi=max(maxi,i-mp[cnt]);
            else
                mp[cnt]=i;
        }
        return maxi;
    }
};