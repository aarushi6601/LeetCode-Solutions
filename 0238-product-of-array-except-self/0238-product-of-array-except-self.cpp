class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        //exclude a[i] while calculating our prefix and suffix array as the pref array should contain the pref product of every element before ith and the suffix array should contain the suff pro of every element after i
        int n=a.size();
        vector<int>pref(n,0),suff(n,0),ans(n,0);
        pref[0]=1;
        suff[n-1]=1;
        for(int i=1;i<n;i++)
            pref[i]=pref[i-1]*a[i-1];
        for(int i=n-2;i>=0;i--)
            suff[i]=suff[i+1]*a[i+1];
        for(int i=0;i<n;i++)
            ans[i]=pref[i]*suff[i];
        return ans;
    }
};