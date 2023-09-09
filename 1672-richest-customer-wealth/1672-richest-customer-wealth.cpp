class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=-1,sum=0;
        for(vector v:accounts)
        {
            for(int x:v)
                sum+=x;
            mx=max(mx,sum);
            sum=0;
        }
        return mx;
    }
};