class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long ans=0,prf_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            prf_sum+=nums[i];
            ans=max(ans,(prf_sum+i)/(i+1));
        }
        return ans;
    }
};