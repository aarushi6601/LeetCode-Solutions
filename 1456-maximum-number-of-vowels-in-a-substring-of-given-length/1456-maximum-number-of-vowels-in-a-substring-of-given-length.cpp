class Solution {
public:
    int maxVowels(string st, int k) {
        unordered_set<char>s{'a','e','i','o','u'};
        int cnt=0;
        for(int i=0;i<k;i++)
        {
         cnt+=s.count(st[i]);
        }
        int ans=cnt;
        for(int i=k;i<st.length();i++)
        {
            if(s.count(st[i])>0) cnt++;
            if(s.count(st[i-k])>0) cnt--;
            ans=max(cnt,ans);
        }
        return ans;
        
    }
};