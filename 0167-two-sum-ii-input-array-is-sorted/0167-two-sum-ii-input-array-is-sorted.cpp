class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         //two pointrs approach for O(1) space as input array is also sortd
        int lft=0,right=nums.size()-1;
        vector<int>ans;
        while(lft<right)
        {
            int sum=nums[lft]+nums[right];
            if(sum>target)
                right--;
            else if(sum<target)
                lft++;
            else
            {
                ans.push_back(lft+1);
                ans.push_back(right+1);
                break;
            }
        }
        return ans;
    }
};