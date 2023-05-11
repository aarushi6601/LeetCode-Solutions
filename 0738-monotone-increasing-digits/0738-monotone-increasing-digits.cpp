class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string str = to_string(N);
        
        int marker = str.size();
        for(int i = str.size()-1; i > 0; i --) {
            if(str[i] < str[i-1]) {
                marker = i;
                str[i-1] = str[i-1]-1;
            }
        }
        
        for(int i = marker; i < str.size(); i ++) str[i] = '9';
        
        return stoi(str);
    }
};