class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        //[ai-aj]*ak
        //ans=total val, max1=ai-aj, max2=ai
        long long ans=0;
        int max1=0,max2=0;
        for(int &x:nums)
        {
            ans=max(ans,1LL*max1*x);
            max1=max(max1, max2-x);
            max2=max(max2,x);
        }
        return ans;
    }
};