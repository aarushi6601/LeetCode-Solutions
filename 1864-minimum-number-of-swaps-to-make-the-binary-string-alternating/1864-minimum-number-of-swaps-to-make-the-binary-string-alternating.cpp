class Solution {
public:
    int minSwaps(string s) {
        int zero=0,one=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        if(abs(zero-one)>1) return -1;
        string s1="",s2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1+='0';
                s2+='1';
            }
            else{
                s1+='1';
                s2+='0';
            }
        }
        int count1=0,count2=0;
        if(zero==one){
            for(int i=0;i<n;i++){
                if(s[i]!=s1[i]) count1++;
                if(s[i]!=s2[i]) count2++;
            }
            return min(count1/2, count2/2);
        }
        if(one>zero) s1=s2;
        for(int i=0;i<n;i++)
            if(s[i]!=s1[i]) count1++;
        return count1/2;
    }
};