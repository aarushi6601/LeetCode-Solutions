class Solution {
public:
    void calc(vector<int>count,int& ans)
    {
        for(int i=0;i<26;i++)
        {
            if(count[i])
            {
                ans++;
                count[i]--;
                calc(count,ans);
                count[i]++;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        vector<int>count(26,0);
        for(auto it:tiles)
            count[it-'A']++;
        
        int ans=0;
        calc(count,ans);
        return ans;
    }
    
};