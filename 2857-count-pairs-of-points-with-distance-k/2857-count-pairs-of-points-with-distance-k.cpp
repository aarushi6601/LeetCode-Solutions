class Solution {
public:
    // 1. x ^ a == 0 and y ^ b == k, or we can say x ^ 0 == a and y ^ k == b thus check whether {a, b} exists
    // 2. x ^ a == 1 and y ^ b == k - 1, or we can say x ^ 1 == a and y ^ (k - 1) == b thus check {a, b} exists
    // .
    // .
    // .
    // k. x ^ a == k and y ^ b == 0, or we can say x ^ k == a and y ^ 0 == b thus check whether {a, b} exists
    int countPairs(vector<vector<int>>& c, int k) {
        map<pair<int, int>, int> mp;
        //for every coordinate combination x,y the map stores its frequency but it does so while checking only.
        long long ans = 0;
        for(auto i: c) {
            for(int j = 0; j <= k; j++) {
                int x = j ^ i[0];
                int y = (k - j) ^ i[1];
                if(mp.find({x, y}) != mp.end()) {
                    ans += mp[{x, y}];
                }
            }
            mp[{i[0], i[1]}]++;
        }
        return ans;
    }
};
