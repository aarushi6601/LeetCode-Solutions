class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         //two pointrs approach for O(1) space as input array is also sortd
        int lft=0,right=nums.size()-1;
        vector<int>ans;
        while(lft<right)
        {
            int sum=nums[lft]+nums[right];
            if(sum==target)
                return {lft+1,right+1};
               
            else if(sum<target)
                lft++;
            else
            {
                right--;
            }
        }
        return {};
    }
};