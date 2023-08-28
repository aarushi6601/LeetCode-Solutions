class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(int x:nums)
            mp[x]++;
        vector<pair<int,int>>p;
        for(auto it:mp)
            p.push_back({it.first,it.second});
        //it.first=value, it.second=freq
       sort(p.begin(),p.end(),[](pair<int,int> &a,pair<int,int> &b){
           if(a.second==b.second)//if both have same freq then bigger val will come first
           return a.first>b.first;
           return a.second<b.second;
       });
        //now after we have finished sorting the pairs acc to the given conditions we need to push the value of the pairs into the array and return the resulting aray
        for(auto it:p)
        {
            int num= it.first;
            int freq=it.second;
            for(int j=0;j<freq;j++)
                ans.push_back(num);
        }
        return ans;
        
    }
};