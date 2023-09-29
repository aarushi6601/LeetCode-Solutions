class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //can use set but just b sure of k=0 ie if the set has repeated elements what to do
        set<int>s;
        set<int>repeated;
        for(int x:nums)
        {
            if(s.count(x))
                repeated.insert(x);
            s.insert(x);
        }
        if(k==0) return repeated.size();
        int ans=0;
        for(int x:s)
        {
            if(s.find(x+k)!=s.end())
                ans++;
        }
        return ans;
    }
};