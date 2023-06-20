class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int xy=0;
        for(int n:nums) xy ^=n;
        xy &= -xy;
        vector<int>result(2,0);
        for(int n:nums)
        {
            if((n&xy)==0)
                result[0]^=n;
            else 
                result[1]^=n;
            
        }
        return result;
    }
};