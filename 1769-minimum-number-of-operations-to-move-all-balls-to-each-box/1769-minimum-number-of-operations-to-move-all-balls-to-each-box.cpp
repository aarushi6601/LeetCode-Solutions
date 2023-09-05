class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>anss;
        int ans=0;
        for(int i=0;i<boxes.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                ans+=(boxes[j]=='1')?(abs(i-j)):0;
                
            }
            for(int k=i+1;k<boxes.size();k++)
            {
                ans+=(boxes[k]=='1')?(abs(i-k)):0;
            }
            anss.push_back(ans);
        ans=0;
        }
        return anss;
        
    }
};