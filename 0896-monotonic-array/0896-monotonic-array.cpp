class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag=0,flag1=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
                flag=1;
            else if(nums[i]>nums[i+1])
                flag1=1;
        }
        // cout<<flag<<flag1;
        if(flag && flag1)
            return false;
        return true;
    }
};