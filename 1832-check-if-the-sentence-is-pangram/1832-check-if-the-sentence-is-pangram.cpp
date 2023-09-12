class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freq(26,0);
        for(char ch:sentence)
        {
            freq[ch-'a']++;
        }
        for(char ch='a';ch<='z';ch++)
        {
            if(freq[ch-'a']<1)
                return false;
        }
        return true;
    }
};