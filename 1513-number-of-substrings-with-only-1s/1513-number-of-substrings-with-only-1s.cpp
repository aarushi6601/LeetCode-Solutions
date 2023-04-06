class Solution {
public:
    int numSub(string s) {
        long long int ans=0;
        long long int cnt=0;
        int mod=1e9+7;
        for(int i=0;i<s.length();i++)
        {
          
            if(s[i]=='1')
            {
                cnt++;
                ans+=cnt;
            }
            else 
                cnt=0;
           
           
        }
        return ans%mod;
    }
};