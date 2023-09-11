class Solution {
public:
    int numberOfMatches(int n) {
        int matches,ans=0;
        while(n>1)
        {
            if(n&1)
            {
                matches=(n-1)/2;
                
                n=matches+1;
            }else{
                matches=n/2;
                n=matches;
            }
            ans+=matches;
        }
        return ans;
    }
};