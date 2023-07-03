class Solution {
public:
    int numSteps(string s) {
       int n =s.length();
        int carry=0,ans=0;
        for(int i=n-1;i>0;i--)
        {
            if(s[i]-'0'+carry==1)//no is odd so we need two ops,one for adding one and then dividing by 2 so carry also changes to 1
            {
                carry=1;
                ans+=2;
            }
            else ans+=1;
        }
        return ans+carry;//for s[0], s[0] has to be 1, if carry is 1 then 1+1=2 so we need one op ie divide by 2 buut if carry is 0 and then s[0] is still 1 so we end there no more ops needed
    }
};