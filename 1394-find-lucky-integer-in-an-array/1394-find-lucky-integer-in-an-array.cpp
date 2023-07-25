class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>freq(501,0);
        for(int x:arr)
            freq[x]++;
        int cnt=0,ans=0;
        for(int i=freq.size()-1;i>0;i--)
            if(freq[i]==i)
                return i;
        return -1;
    }
};