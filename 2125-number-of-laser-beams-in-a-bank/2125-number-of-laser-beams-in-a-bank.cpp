class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
        int sum=0;
        for(string s:bank)
        {
            for(char ch:s)
            {
                sum+=ch-'0';
            }
            if(sum)
            ans.push_back(sum);
            sum=0;
        }
        if(ans.size()<=1) return 0;
        long long int res=0;
        for(int i=0;i<ans.size()-1;i++)
            res+=ans[i]*ans[i+1];
        return res;
        
    }
};