class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int lmax=0,gmax=INT_MIN;
        for(int x:nums)
        {
            lmax=max(lmax+x,x);
            gmax=max(gmax,lmax);
        }
        return gmax;
    }
};