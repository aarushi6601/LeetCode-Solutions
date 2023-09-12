class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>freq(26,0);
        for(char ch:s)
        {
            freq[ch-'a']++;
        }
        int x=freq[s[0]-'a'];
        for(int i:freq)
        {
            
            if(i!=x && i!=0)
                return false;
        }
        return true;
    }
};