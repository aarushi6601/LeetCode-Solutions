class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int n=nums.size();
        int seenonce=0,seentwice=0;
        for(int x:nums)
        {
            seenonce=(seenonce^x)&(~seentwice);
            seentwice=(seentwice^x) & (~seenonce);
        }
        return seenonce;
    }
};