class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x=nums.size();
        // vector<int>num(nums.size()*2,0);
      for(int i=0;i<x;i++)
      {
          nums.push_back(nums[i]);
      }            return nums;

    }
};