class Solution {
public:
    int countAsterisks(string s) {
        int ans=0;
        bool in=0;
        for(char c:s){
            if(c=='|') in=!in;
            if(c=='*' && !in) ++ans;
            
        }
        return ans;
        
        }
    
};