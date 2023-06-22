class Solution {
public:
    int minDeletions(string s) {
       //find a greedy solution where u first sort the string on the basis of their frequencies ie decreasing freq and then keep deleting the character until u find the no of occurences which havent appeared before
        vector<int>freq(26,0);
        for(char ch:s)
            freq[ch-'a']++;
        int ans=0;
        unordered_set<int>used;
        for(int i:freq)
        {
            while(i>0)
            {
            if(used.count(i)!=0)//collision
            {  i--;//decreasing the no of occurences of this particular char
                ans++;//cal the no of characters we might need to delete
                } 
            else 
            {
                used.insert(i);//inserting the frequency into the set
               break; 
            }
            }
        }
      return ans;  
    }
};