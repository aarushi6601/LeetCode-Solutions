class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        vector<vector<int>>res;
        
        vector<int>ans[a.size()+1];
        
        for(int i=0;i<a.size();i++){
            ans[a[i]].push_back(i);
        
            //when the group is filled, empty it and store it in the ans
            if(ans[a[i]].size()==a[i])
            {    res.push_back(ans[a[i]]);
            ans[a[i]].clear();
        }
        }
        return res;
        
    }
};