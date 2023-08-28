class Solution {
public:
    int minSetSize(vector<int>& arr) {
    // sort(arr.begin(),arr.end());
        int n=arr.size();
    //     set<int>s1(arr.begin(),arr.begin()+n/2);
    //     set<int>s2(arr.begin()+n/2, arr.end());
    //     return min(s1.size(),s2.size());
        //arrange no on the basis of their freq;
        map<int,int>mp;
        for(int x:arr)
            mp[x]++;
        //push elements into vector of pairs where each pair has a value and its respective freq, then sort the vector of pairs
        vector<pair<int,int>>p;
        for(auto it:mp)
        {
            p.push_back({it.first,it.second});
        }
        sort(p.begin(),p.end(),[](pair<int,int> &a, pair<int,int>&b){
            return a.second>b.second;
        });
        int i=0;
        int count=0;
        for(auto pair:p)
        {
            count+=pair.second;
            i++;
            if(count>=n/2)
            break;
        }
        return i;
        
    }
};