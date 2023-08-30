class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // set<int>s(arr.begin(),arr.end());
        set<int>s;
        for(int x:arr)
        {
            if(s.count(x*2) || (x%2==0 && s.count(x/2)))
               return true;
        
               s.insert(x);
               }
        return false;
    }
};