class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        //alex wants to sit in a manner st the dist bw him and the closest person is maximised
        vector<int>mp;
        int k=0;
        //find the position of 1s and store them in mp vector
        for(int i=0;i<seats.size();i++)
            if(seats[i]==1)
                mp.push_back(i);
        
        //special case when theres a 1 at the beginning or the end
        int currMax=max(mp[0],int(seats.size()-1-mp.back()));
        //we have to find the max dist bw any two consecutive ones so record currMax so far
        //calculating the max distance bw the ones
        
        for(int i=0;i<mp.size()-1;i++)
        {
            int ans=mp[i+1]-mp[i];
            
            ans/=2;
            currMax=max(currMax,ans);
        }
        
        return currMax;
    }
};