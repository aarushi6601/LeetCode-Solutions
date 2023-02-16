class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& queries) {
        unordered_map<long long,int>mp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                mp[0]=i;
                break;
            }
            
                
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                string t;
                int j=i;
                while(j<s.size())
                {
                    int left=j-i+1;
                    t+=s[j];
                    if(left>30) break;
                    j++;
                    long long val=0;
                    for(int k=0;k<t.size();k++)
                    {
                        val=(val*2+(t[k]=='1'?1:0));
}
                    if(mp.find(val)!=mp.end()) continue;
                    mp[val]=i;
                }
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<queries.size();i++)
        {
            long long val=queries[i][0]^queries[i][1];
            if(mp.find(val)!=mp.end())
            {
                int cp=val;
                int lt=0;
                if(cp==0) lt++;
                while(cp) cp/=2,lt++;
                vector<int>v;
                v.push_back(mp[val]);
                v.push_back(mp[val]+lt-1);
                ans.push_back(v);
            }
            else ans.push_back({-1,-1});
}
        return ans;
    }
};