class Solution {
public:
//       If freq = 1, not possible, return -1
// If freq = 2, needs one 2-tasks
// If freq = 3, needs one 3-tasks
// If freq = 3k, freq = 3 * k, needs k batchs.
// If freq = 3k + 1, freq = 3 * (k - 1) + 2 + 2, needs k + 1 batchs.
// If freq = 3k + 2, freq = 3 * k + 2, needs k + 1 batchs.
             int minimumRounds(vector<int>& A) {
        map<int, int> mp;
        int res = 0, freq1;
        for (int a: A)
        mp[a]++;
        for (auto& it: mp) {
            if (it.second == 1) return -1;
            res += (it.second + 2) / 3;
        }
        return res;
    
        
        
    }
};