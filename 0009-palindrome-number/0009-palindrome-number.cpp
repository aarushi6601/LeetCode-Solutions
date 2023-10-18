class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string c=s;
        reverse(s.begin(),s.end());
        if(s==c)
            return true;
        return false;
    }
};