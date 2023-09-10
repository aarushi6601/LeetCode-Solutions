class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>b;
        int n=0;
        n=*max_element(candies.begin(),candies.end());
        cout<<n;
        for(int i:candies)
        {
            b.push_back(i+extraCandies>=n);
        }
    return b;
    }
};