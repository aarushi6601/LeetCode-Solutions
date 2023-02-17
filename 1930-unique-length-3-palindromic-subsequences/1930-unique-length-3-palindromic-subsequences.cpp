class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<pair<int,int>>v(26,{-1,-1});
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a'].first == -1) v[s[i]-'a'].first=i;
            else v[s[i]-'a'].second=i;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(v[i].first<v[i].second)
            {
                unordered_set<char>res;
                for(int x=v[i].first+1;x<v[i].second;x++)
                    res.insert(s[x]);
                ans+=((int)res.size());
            }
        }
        return ans;
    }
};