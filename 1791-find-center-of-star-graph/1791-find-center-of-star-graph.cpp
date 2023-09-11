class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        for(vector v:edges)
        {
            mp[v[0]]++;            mp[v[1]]++;

            
        }
        int ans;
        for(auto it:mp)
        {
            if(it.second==edges.size())
              ans= it.first;
        }
        return ans;
        
    }
};