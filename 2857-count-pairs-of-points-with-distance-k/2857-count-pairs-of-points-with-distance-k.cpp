class Solution {
public:
    // finding all possible (x,y) which gives : 
            //c[i][0]^x+c[i][1]^y=k                   (0)
            //Consider above is true , then
            //if , c[i][0]^x=val                      (1)
            //then c[i][1]^y=k-val                    (2)
            
            //We can definitely find all possible values of val (0 to k inclusive) 
            //using a^b=c , then a^c=b
            //from  (1) , we have c[i][0]^val=x;
            //from  (2) , we have c[i][1]^(k-val)=y;
            //so we just need to traverse through all possible values 
    int countPairs(vector<vector<int>>& c, int k) {
        map<pair<int, int>, int> mp;
       
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
