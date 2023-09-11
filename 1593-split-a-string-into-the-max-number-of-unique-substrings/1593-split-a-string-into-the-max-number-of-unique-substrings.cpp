class Solution {
public:
    int maxUniqueSplit(string s) {
        //using errichtos solution
        //we are iterating over all possible solutions which are 2^n in no by using a bitmask which is a string of 0s and 1s and which suggests that if a particular string has been split here in this manner before or not
        //abcd -> a bcd ab cd a b cd ...
    //a|b|c|d
            int ans=0;
        int n=s.length();
        //mask denotes all posibilites
        for(int mask=0;mask<(1<<(n-1));mask++)
        {
            int maybe_ans=__builtin_popcount(mask)+1;
            if(maybe_ans<=ans)
                continue;
            set<string>strings;
            string current;
            bool ok=true;
            for(int i=0;i<n;i++)
            {
                current+=s[i];
                if(i==n-1 || (mask & (1<<i))){
                    if(!strings.insert(current).second)
                    {
                        ok=false;
                        break;
                    }
                    current="";
                }
            }

        
if(ok) ans=max(ans,maybe_ans);
    }
    return ans;
    }
};