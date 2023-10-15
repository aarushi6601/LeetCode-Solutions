class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int maxLength=0,max_count=0;
        vector<int>count(26,0);
        for(int end=0;end<s.length();end++)
        {
            count[s[end]-'A']++;
           int curr_count=count[s[end]-'A'];
            max_count=max(max_count,curr_count);//kps track of max occuring charactr
        
        while(end-start+1-max_count>k)
        {
            count[s[start]-'A']--;//popping off charactrs from th start
            start++;//shrinking the window siz by considring a nw window
            
        }
            maxLength=max(maxLength,end-start+1);
        }
        return maxLength;
        
    }
};