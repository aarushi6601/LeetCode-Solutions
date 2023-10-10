
class Solution {
    // bool areVectorsEqual(vector<int> a, vector<int> b){
    //     for(int i=0; i<26; i++){
    //         if(a[i]!=b[i]) return false;
    //     }
    //     return true;
    // }
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> freqS1(26, 0);
        for(char c: s1) freqS1[c-'a']++;
        
        vector<int> freqS2(26, 0);
        int start=0, nd=0;
        
        while(nd<s2.size()){
            freqS2[s2[nd]-'a']++;
            
            if(nd-start+1==s1.size()){
                if(freqS1==freqS2) return true;
            }
            
            if(nd-start+1<s1.size()) nd++;
            else{
                freqS2[s2[start]-'a']--;
                start++;
                nd++;
            }
        }
        return false;
    }
};