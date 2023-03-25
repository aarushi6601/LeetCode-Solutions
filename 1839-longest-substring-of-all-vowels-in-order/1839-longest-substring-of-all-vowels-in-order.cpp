class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int l=word.size();
        int len=1,cnt=1;
        int max_len=0;
        for(int i=1;i<l;i++)
        {
            if(word[i-1]==word[i])
            {
                len++;
            }
            else if(word[i-1]<word[i])
            {
                len++;
                cnt++;
            }
            else{
                len=1;
                cnt=1;
            }
            if(cnt==5)
                max_len=max(max_len,len);
        }
        return max_len;
    }
};