class Solution {
public:
    int countVowelStrings(int n) {
        int ans=0;
        vector<int>dp={0,1,1,1,1,1};
      for(int i=1;i<=n;i++)
      {
          
          for(int k=1;k<=5;k++)
              dp[k]=dp[k]+dp[k-1];
      }
        return dp[5];
        
    }
};