class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        long long ans=0;
        int start=1;
        for(auto it:mp)
        {
            long long l=start;
            long long r=it.first;
            if(k>(r-l))
                k-=(r-l);
            else
                break;
            ans+=((r)*(r-1))/2-((l)*(l-1))/2;
            start=r+1;
        }
        long long l=start;
        long long r=start+k;
        ans+=((r)*(r-1))/2-((l)*(l-1))/2;
        return ans;
    }
};