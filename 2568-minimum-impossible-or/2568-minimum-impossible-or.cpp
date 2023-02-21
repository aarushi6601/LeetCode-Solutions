class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int x=1;
        while(s.count(x))
            x<<=1;
        return x;
        
    }
};