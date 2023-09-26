class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        sort(s.rbegin(),s.rend());
        int i=0;
        // cout<<s;
       while(s[i]=='1')
       {
           i++;
       }
        // cout<<i;
        swap(s[i-1],s[s.length()-1]);
        return s;
       
    } 
           
};