class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>copy;
        copy=nums;
        map<int,int>mp;
        sort(copy.begin(),copy.end());
        for(int i=copy.size()-1;i>=0;i--)
        {
            mp[copy[i]]=i;
        }
        // for(int x:copy)
            // cout<<x;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=mp[nums[i]];
            
        }
        return nums;
    }
};