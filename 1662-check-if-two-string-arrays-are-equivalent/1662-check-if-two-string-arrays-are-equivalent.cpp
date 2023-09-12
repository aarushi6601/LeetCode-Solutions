class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans="",ans1="";
        for(string s:word1)
            ans+=s;
        for(string s1:word2)
            ans1+=s1;
        return ans1==ans;
    }
};