class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x=nums.size();
        vector<int>num(nums.size()*2,0);
      for(int i=0;i<nums.size();i++)
      {
          num[i]=nums[i];
          num[i+x]=nums[i];
      }            return num;

    }
};